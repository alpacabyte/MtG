#include "AllColorLoseTrampleEffect.h"
#include "Player.h"

void AllColorLoseTrampleEffect::UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    int i = 0;
    for (auto card : activePlayer->GetInPlay()){
        if (card->GetType() == "Creature" && card->GetColor() == "Green"){
            std::cout << activePlayer->GetInPlay().at(i)->getCardName() << " lost trample" << std::endl;
            std::cout << "-------" << std::endl;
            activePlayer->GetInPlay().at(i)->SetTrample(false);
        }
        i++;
    }

    int k = 0;
    for (auto card : otherPlayer->GetInPlay()){
        if (card->GetType() == "Creature" && card->GetColor() == "Green"){
            std::cout << otherPlayer->GetInPlay().at(i)->getCardName() << " lost trample" << std::endl;
            std::cout << "-------" << std::endl;
            otherPlayer->GetInPlay().at(k)->SetTrample(false);
        }
        k++;
    }
}

void AllColorLoseTrampleEffect::DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) {
    int i = 0;
    for (auto card : activePlayer->GetInPlay()){
        if (card->GetType() == "Creature" && card->GetColor() == "Green"){
            if (card->GetInitialTrample()){
                std::cout << card->getCardName() << " gained trample back" << std::endl;
                std::cout << "-------" << std::endl;
            }
            activePlayer->GetInPlay().at(i)->SetTrample(card->GetInitialTrample());
        }
        i++;
    }

    int k = 0;
    for (auto card : otherPlayer->GetInPlay()){
        if (card->GetType() == "Creature" && card->GetColor() == "Green"){
            if (card->GetInitialTrample()){
                std::cout << card->getCardName() << " gained trample back" << std::endl;
                std::cout << "-------" << std::endl;
            }
            otherPlayer->GetInPlay().at(k)->SetTrample(card->GetInitialTrample());
        }
        k++;
    }
}
