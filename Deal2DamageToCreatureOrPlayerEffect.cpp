#include "Deal2DamageToCreatureOrPlayerEffect.h"
#include "Player.h"

void Deal2DamageToCreatureOrPlayerEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    std::cout << "Characters that you can deal 2 damage: " << std::endl;
    int i = 0;
    for (auto card : otherPlayer->GetInPlay()){
        if (card->GetType() == "Creature"){
            std::cout << "#" << i << " " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }
    std::cout << "#" << otherPlayer->GetInPlay().size() << " " << otherPlayer->GetPlayerName() << std::endl;
    std::cout << "-------" << std::endl;

    std::cout << "Select the character that you want to deal 2 damage: " << std::endl;

    int input = 9;
    while(!(std::cin >> input) || (input >= otherPlayer->GetInPlay().size() && input != otherPlayer->GetInPlay().size()) ||
            otherPlayer->GetInPlay().at(input)->GetType() != "Creature"){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;

    if (input != otherPlayer->GetInPlay().size()){
        std::cout << cardName << " dealt 2 damage to " << otherPlayer->GetInPlay().at(input)->getCardName() << std::endl;
        std::cout << "-------" << std::endl;
        otherPlayer->GetInPlay().at(input)->TakeDamage(2);
    }

    else{
        std::cout << cardName << " dealt 2 damage to " << otherPlayer->GetPlayerName() << std::endl;
        std::cout << "-------" << std::endl;
        otherPlayer->GetDamage(2);
    }

}
