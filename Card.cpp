#include "Card.h"

std::string Card::getCardName() {
    return Card::cardName;
}

void Card::Untap() {

}

std::string Card::PrintAll() {
    std::string properties;

    properties += "Card Name: " + Card::cardName;
    properties += ", Type: " + Card::type;

    return properties;
}

std::string Card::GetType() {
    return Card::type;
}

std::string Card::GetColor() {
    return "";
}

bool Card::IsTapped() {
    return true;
}

ManaCost Card::GetManaCost() {
    return {};
}

void Card::TapCard() {

}

std::shared_ptr<Effect> Card::GetEffect() {
    return {};
}

void Card::CreatureCardStatSetStats(int plusAP, int plusHP) {

}

void Card::TakeDamage(int damage) {

}

void Card::SetFirstStrike(bool firstStrikeState) {

}

void Card::SetTrample(bool trampleState) {

}

void Card::ControlEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer) {

}

bool Card::GetInitialTrample() {
    return false;
}

bool Card::GetInitialFirstStrike() {
    return false;
}

void Card::ResetHP() {

}

int Card::GetHP() {
    return 0;
}

void Card::ResetCard() {

}

void Card::AttackToCard(std::shared_ptr<Card> defendingCard, std::shared_ptr<Player> otherPlayer) {

}

bool Card::GetFirstStrike() {
    return false;
}

int Card::GetAttackPower() {
    return 0;
}

bool Card::GetSummoningSickness() {
    return false;
}

bool Card::GetIsSelected() {
    return false;
}

void Card::SelectIt() {

}

void Card::UnSelectIt() {

}


