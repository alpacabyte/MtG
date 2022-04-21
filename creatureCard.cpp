#include "creatureCard.h"
#include "Player.h"

creatureCard::creatureCard(std::string name, std::string type, int green, int blue, int red, int white, int black, int colorless,
std::string color, int attackPower, int baseHP, bool hasFS, bool hasTrample) {

    creatureCard::cardName = name;
    creatureCard::type = type;
    creatureCard::manaCost.InitializeManaCost(green, blue, red, white, black, colorless);
    creatureCard::color = color;
    creatureCard::attackPower = attackPower;
    creatureCard::initialAttackPower = attackPower;
    creatureCard::baseHP = baseHP;
    creatureCard::currentHP = baseHP;
    creatureCard::initialHP = baseHP;
    creatureCard::hasFirstStrike = hasFS;
    creatureCard::initialHasFirstStrike = hasFS;
    creatureCard::hasTrample = hasTrample;
    creatureCard::initialHasTrample = hasTrample;
}

void creatureCard::Untap() {
    creatureCard::isTapped = false;
    creatureCard::hasSummoningSickness = false;
}

std::string creatureCard::PrintAll() {
    std::string properties;

    properties = "Card Name: " + creatureCard::cardName;
    properties += ", Type: " + creatureCard::type;
    properties += ", Color: " + creatureCard::color;
    properties += ", AP/HP: " + std::to_string(creatureCard::attackPower) + "/" + std::to_string(creatureCard::currentHP);
    properties += ", Can be tapped: ";
    if (creatureCard::isTapped) properties += "No";
    else properties += "Yes";
    if (creatureCard::hasSummoningSickness) properties += ", Has summoning sickness";
    properties += ",\n";
    if (hasFirstStrike){
        properties += "Ability: First Strike, ";
    }
    if (hasTrample){
        properties += "Ability: Trample, ";
    }
    properties += "Color: " + creatureCard::color;
    properties += ", Mana Cost: " + creatureCard::manaCost.GetAllManaCosts();

    return properties;
}

ManaCost creatureCard::GetManaCost() {
    return creatureCard::manaCost;
}

void creatureCard::CreatureCardStatSetStats(int plusAP, int plusHP){
    creatureCard::baseHP += plusHP;
    creatureCard::currentHP += plusHP;
    creatureCard::attackPower += plusAP;

    std::cout << creatureCard::cardName << " got " << plusAP << " attack power and " << plusHP << " health point" << std::endl;
    std::cout << "-------" << std::endl;
}

void creatureCard::TakeDamage(int damage) {
    currentHP -= damage;
    if (currentHP <= 0){
        std::cout << cardName << " died!" << std::endl;
        std::cout << "-------" << std::endl;
    }
}

void creatureCard::SetTrample(bool trampleState) {
    creatureCard::hasTrample = trampleState;
}

void creatureCard::SetFirstStrike(bool firstStrikeState) {
    creatureCard::hasFirstStrike = firstStrikeState;
}

void creatureCard::ControlEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer) {
    for (auto enchantmentCard : activePlayer->GetInPlay()){
        if (enchantmentCard->GetType() == "Enchantment"){
            if (enchantmentCard->getCardName() == "Holy War" && creatureCard::GetColor() == "White"){
                creatureCard::CreatureCardStatSetStats(1, 1);
            }
            else if (enchantmentCard->getCardName() == "Holy Light" && creatureCard::GetColor() == "Black"){
                creatureCard::CreatureCardStatSetStats(-1, -1);
            }
            else if (enchantmentCard->getCardName() == "Unholy War" && creatureCard::GetColor() == "Black"){
                creatureCard::CreatureCardStatSetStats(2, 0);
            }
            else if (enchantmentCard->getCardName() == "Restrain" && creatureCard::GetColor() == "Green"){
                std::cout << creatureCard::cardName << " lost trample" << std::endl;
                creatureCard::SetTrample(false);
            }
        }
    }

    for (auto enchantmentCard : otherPlayer->GetInPlay()){
        if (enchantmentCard->GetType() == "Enchantment"){
            if (enchantmentCard->getCardName() == "Holy War" && creatureCard::GetColor() == "White"){
                creatureCard::CreatureCardStatSetStats(1, 1);
            }
            else if (enchantmentCard->getCardName() == "Holy Light" && creatureCard::GetColor() == "Black"){
                creatureCard::CreatureCardStatSetStats(-1, -1);
            }
            else if (enchantmentCard->getCardName() == "Unholy War" && creatureCard::GetColor() == "Black"){
                creatureCard::CreatureCardStatSetStats(2, 0);
            }
            else if (enchantmentCard->getCardName() == "Restrain" && creatureCard::GetColor() == "Green"){
                std::cout << creatureCard::cardName << " lost trample" << std::endl;
                creatureCard::SetTrample(false);
            }
        }
    }
}

bool creatureCard::GetInitialTrample() {
    return creatureCard::initialHasTrample;
}

bool creatureCard::GetInitialFirstStrike() {
    return creatureCard::initialHasFirstStrike;
}

std::string creatureCard::GetColor() {
    return creatureCard::color;
}

void creatureCard::ResetHP() {
    creatureCard::currentHP = creatureCard::baseHP;
}

int creatureCard::GetHP() {
    return creatureCard::currentHP;
}

void creatureCard::ResetCard() {
    creatureCard::hasFirstStrike = creatureCard::initialHasFirstStrike;
    creatureCard::hasTrample = creatureCard::initialHasTrample;
    creatureCard::currentHP = creatureCard::initialHP;
    creatureCard::attackPower = creatureCard::initialAttackPower;
    creatureCard::isTapped = false;
    creatureCard::hasSummoningSickness = true;
    creatureCard::isSelected = false;
}

bool creatureCard::IsTapped() {
    return creatureCard::isTapped;
}

void creatureCard::AttackToCard(std::shared_ptr<Card> defendingCard, std::shared_ptr<Player> otherPlayer) {
    std::string attackingCardName = creatureCard::cardName;
    std::string attackingCardAP = std::to_string(creatureCard::attackPower);
    std::string attackingCardHP = std::to_string(creatureCard::currentHP);
    std::string shortcutAttacking = attackingCardName + " (" + attackingCardAP + "/" + attackingCardHP + ")";

    if (defendingCard != nullptr){
        bool attackingTrample = creatureCard::hasTrample;
        bool attackingFirstStrike = creatureCard::hasFirstStrike;
        bool defendingFirstStrike = defendingCard->GetFirstStrike();

        std::string defendingCardName = defendingCard->getCardName();
        std::string defendingCardAP = std::to_string(defendingCard->GetAttackPower());
        std::string defendingCardHP = std::to_string(defendingCard->GetHP());
        std::string shortcutDefending = defendingCardName + " (" + defendingCardAP + "/" + defendingCardHP + ")";

        if (attackingFirstStrike){
            if (defendingFirstStrike){
                std::cout <<  shortcutAttacking << " attacked to " << shortcutDefending << std::endl;
                creatureCard::TakeDamage(defendingCard->GetAttackPower());
                defendingCard->TakeDamage(attackPower);
            }

            else {
                std::cout <<  shortcutAttacking << " attacked to " << shortcutDefending << std::endl;
                defendingCard->TakeDamage(attackPower);

                if (defendingCard->GetHP() > 0){
                    creatureCard::TakeDamage(defendingCard->GetAttackPower());
                }

                else {
                    std::cout <<  shortcutAttacking << " killed " << shortcutDefending << " before it attacks" << std::endl;
                }
            }
        }

        else {
            if (defendingFirstStrike){
                std::cout <<  shortcutAttacking << " attacked to " << shortcutDefending << std::endl;
                creatureCard::TakeDamage(defendingCard->GetAttackPower());

                if (creatureCard::currentHP > 0){
                    defendingCard->TakeDamage(attackPower);
                }

                else {
                    std::cout <<  shortcutDefending << " killed " << shortcutAttacking << " before it attacks" << std::endl;
                }
            }

            else {
                std::cout <<  shortcutAttacking << " attacked to " << shortcutDefending << std::endl;
                creatureCard::TakeDamage(defendingCard->GetAttackPower());
                defendingCard->TakeDamage(attackPower);
            }
        }

        if (attackingTrample && defendingCard->GetHP() < 0){
            int excessDamage = -defendingCard->GetHP();
            std::cout <<  shortcutAttacking << " reflected excessive " << excessDamage << " damage to " << otherPlayer->GetPlayerName() << std::endl;
            otherPlayer->GetDamage(excessDamage);
        }
    }

    else {
        std::cout <<  shortcutAttacking << " attacked to " << otherPlayer->GetPlayerName() << std::endl;
        otherPlayer->GetDamage(attackPower);
    }

    std::cout << "-------" << std::endl;
}

bool creatureCard::GetFirstStrike() {
    return creatureCard::hasFirstStrike;
}

int creatureCard::GetAttackPower() {
    return creatureCard::attackPower;
}

bool creatureCard::GetSummoningSickness() {
    return creatureCard::hasSummoningSickness;
}

void creatureCard::TapCard() {
    creatureCard::isTapped = true;
}

bool creatureCard::GetIsSelected() {
    return creatureCard::isSelected;
}

void creatureCard::SelectIt() {
    creatureCard::isSelected = true;
}

void creatureCard::UnSelectIt() {
    creatureCard::isSelected = false;
}


