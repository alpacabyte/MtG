#include "enchantmentCard.h"

enchantmentCard::enchantmentCard(std::string name, std::string type, int green, int blue, int red, int white, int black, int colorless,
                                 std::string color, std::shared_ptr<Effect> effect){

    enchantmentCard::cardName = name;
    enchantmentCard::type = type;
    enchantmentCard::manaCost.InitializeManaCost(green, blue, red, white, black, colorless);
    enchantmentCard::color = color;
    enchantmentCard::effect = effect;
}

std::string enchantmentCard::PrintAll() {
    std::string properties;

    properties = "Card Name: " + enchantmentCard::cardName;
    properties += ", Type: " + enchantmentCard::type;
    properties += ", Color: " + enchantmentCard::color;
    properties += ", Mana Cost: " + enchantmentCard::manaCost.GetAllManaCosts();

    return properties;
}

ManaCost enchantmentCard::GetManaCost() {
    return enchantmentCard::manaCost;
}

std::shared_ptr<Effect> enchantmentCard::GetEffect() {
   return enchantmentCard::effect;
}
