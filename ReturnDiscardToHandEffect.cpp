#include "ReturnDiscardToHandEffect.h"
#include "Player.h"

void ReturnDiscardToHandEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    std::cout << "Creature card(s) in your discard pile that you can get to your hand: " << std::endl;
    int i = 0;
    for (auto card : activePlayer->GetDiscard()){
        if (card->GetType() == "Creature"){
            std::cout << "#" << i << " " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }
    std::cout << "Select card that you want to get to your hand: " << std::endl;

    int input = 9;
    while(!(std::cin >> input) || input >= activePlayer->GetDiscard().size() || activePlayer->GetDiscard().at(input)->GetType() != "Creature"){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;
    std::cout << cardName << " brought back " << activePlayer->GetDiscard().at(input)->getCardName() << " from discard pile to hand." << std::endl;
    std::cout << "-------" << std::endl;
    activePlayer->SendCardFromDiscardToHand(input);
}