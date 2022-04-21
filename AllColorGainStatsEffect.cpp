#include "AllColorGainStatsEffect.h"
#include "Player.h"

void AllColorGainStatsEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    for (auto creatureCard: activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (cardName == "Holy War" && creatureCard->GetColor() == "White"){
                creatureCard->CreatureCardStatSetStats(1, 1);
            }

            if (cardName == "Holy Light" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(-1, -1);
            }

            if (cardName == "Unholy War" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(2, 0);
            }
        }
    }

    for (auto creatureCard: otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (cardName == "Holy War" && creatureCard->GetColor() == "White"){
                creatureCard->CreatureCardStatSetStats(1, 1);
            }

            if (cardName == "Holy Light" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(-1, -1);
            }

            if (cardName == "Unholy War" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(2, 0);
            }
        }
    }
}

void AllColorGainStatsEffect::DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    int i = 0;
    for (auto creatureCard: activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (cardName == "Holy War" && creatureCard->GetColor() == "White"){
                creatureCard->CreatureCardStatSetStats(-1, -1);
            }

            else if (cardName == "Holy Light" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(1, 1);
            }

            else if (cardName == "Unholy War" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(-2, 0);
            }
        }
        i++;
    }

    int k = 0;
    for (auto creatureCard: otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (cardName == "Holy War" && creatureCard->GetColor() == "White"){
                creatureCard->CreatureCardStatSetStats(-1, -1);
            }

            else if (cardName == "Holy Light" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(1, 1);
            }

            else if (cardName == "Unholy War" && creatureCard->GetColor() == "Black"){
                creatureCard->CreatureCardStatSetStats(-2, 0);
            }
        }
        k++;
    }
}
