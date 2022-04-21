#include "landCard.h"

landCard::landCard(std::string name, std::string type, std::string manaType) {
    landCard::cardName = name;
    landCard::type = type;
    landCard::manaType = manaType;
}

std::string landCard::PrintAll() {
    std::string properties;

    properties = "Card Name: " + landCard::cardName;
    properties += ", Type: " + landCard::type;
    properties += ", Giving Mana Color: " + landCard::manaType;
    properties += ", Can be tapped: ";
    if (landCard::isTapped) properties += "No";
    else properties += "Yes";

    return properties;
}

std::string landCard::GetColor() {
    return landCard::manaType;
}

bool landCard::IsTapped() {
    return landCard::isTapped;
}

void landCard::TapCard() {
    std::cout << landCard::cardName << " is tapped" << std::endl;
    isTapped = true;
}

void landCard::Untap() {
    isTapped = false;
}



