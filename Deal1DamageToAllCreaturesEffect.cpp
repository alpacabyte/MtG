#include "Deal1DamageToAllCreaturesEffect.h"
#include "Player.h"

void Deal1DamageToAllCreaturesEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    int i = 0;
    for (auto creatureCard: activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            std::cout << cardName << " dealt 1 damage to " << creatureCard->getCardName() << std::endl;
            std::cout << "-------" << std::endl;
            creatureCard->TakeDamage(1);
        }
        i++;
    }

    int k = 0;
    for (auto creatureCard: otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            std::cout << cardName << " dealt 1 damage to " << creatureCard->getCardName() << std::endl;
            std::cout << "-------" << std::endl;
            creatureCard->TakeDamage(1);
        }
        k++;
    }
}