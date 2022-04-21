#include "TargetGainTrampleEffect.h"
#include "Player.h"

void TargetGainTrampleEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    std::cout << "Your creature card(s) that you can give trample to it: " << std::endl;
    int i = 0;
    for (auto card : activePlayer->GetInPlay()){
        if (card->GetType() == "Creature"){
            std::cout << "#" << i << " " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }
    std::cout << "Select card that you want to give trample: " << std::endl;

    int input = 9;
    while(!(std::cin >> input) || input >= activePlayer->GetInPlay().size() || activePlayer->GetInPlay().at(input)->GetType() != "Creature"){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;

    std::cout << cardName << " gave trample to " << activePlayer->GetInPlay().at(input)->getCardName() << std::endl;
    std::cout << "-------" << std::endl;
    activePlayer->GetInPlay().at(input)->SetTrample(true);
    onUsedCreatureCard = activePlayer->GetInPlay().at(input);
}

void TargetGainTrampleEffect::DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    if (!onUsedCreatureCard->GetInitialTrample()){
        std::cout << onUsedCreatureCard->getCardName() << " lost trample" << std::endl;
        std::cout << "-------" << std::endl;
    }
    onUsedCreatureCard->SetTrample(onUsedCreatureCard->GetInitialTrample());
}
