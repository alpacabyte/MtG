#include "sorceryCard.h"

sorceryCard::sorceryCard(std::string name, std::string type, int green, int blue, int red, int white, int black, int colorless,
                         std::string color, std::shared_ptr<Effect> effect) {

    sorceryCard::cardName = name;
    sorceryCard::type = type;
    sorceryCard::manaCost.InitializeManaCost(green, blue, red, white, black, colorless);
    sorceryCard::color = color;
    sorceryCard::effect = effect;
}

std::string sorceryCard::PrintAll() {
    std::string properties;

    properties = "Card Name: " + sorceryCard::cardName;
    properties += ", Type: " + sorceryCard::type;
    properties += ", Color: " + sorceryCard::color;
    properties += ", Mana Cost: " + sorceryCard::manaCost.GetAllManaCosts();

    return properties;
}

ManaCost sorceryCard::GetManaCost() {
    return sorceryCard::manaCost;
}

std::shared_ptr<Effect> sorceryCard::GetEffect() {
    return sorceryCard::effect;
}
