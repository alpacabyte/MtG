#include "TargetLoseFirstStrikeEffect.h"
#include "Player.h"

void TargetLoseFirstStrikeEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    std::cout << "Your opponent's creature card(s) that you can take first strike of it: " << std::endl;
    int i = 0;
    for (auto card : otherPlayer->GetInPlay()){
        if (card->GetType() == "Creature"){
            std::cout << "#" << i << " " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }
    std::cout << "Select card that you want to take first strike: " << std::endl;

    int input = 9;
    while(!(std::cin >> input) || input >= otherPlayer->GetInPlay().size() || otherPlayer->GetInPlay().at(input)->GetType() != "Creature"){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;

    std::cout << cardName << " gave first strike to " << activePlayer->GetInPlay().at(input)->getCardName() << std::endl;
    std::cout << "-------" << std::endl;
    otherPlayer->GetInPlay().at(input)->SetFirstStrike(false);
    onUsedCreatureCard = otherPlayer->GetInPlay().at(input);
}

void TargetLoseFirstStrikeEffect::DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    if (!onUsedCreatureCard->GetInitialFirstStrike()){
        std::cout << onUsedCreatureCard->getCardName() << " lost first strike" << std::endl;
        std::cout << "-------" << std::endl;
    }
    onUsedCreatureCard->SetFirstStrike(onUsedCreatureCard->GetInitialFirstStrike());
}