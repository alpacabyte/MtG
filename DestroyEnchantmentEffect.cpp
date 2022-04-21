#include "DestroyEnchantmentEffect.h"
#include "Player.h"

void DestroyEnchantmentEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    std::cout << "Your opponent's enchantment card(s) that you can destroy: " << std::endl;
    int i = 0;
    for (auto card : otherPlayer->GetInPlay()){
        if (card->GetType() == "Enchantment"){
            std::cout << "#" << i << " " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }
    std::cout << "Select card that you want to destroy: " << std::endl;

    int input = 9;
    while(!(std::cin >> input) || input >= otherPlayer->GetInPlay().size() || otherPlayer->GetInPlay().at(input)->GetType() != "Enchantment"){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;
    std::cout << cardName << " destroyed " << otherPlayer->GetInPlay().at(input)->getCardName() << std::endl;
    std::cout << "-------" << std::endl;
    otherPlayer->SendCardFromInplayToDiscard(input, activePlayer, otherPlayer);
}
