#include "ManaCost.h"

void ManaCost::InitializeManaCost(int green, int blue, int red, int white, int black, int colorless) {
    ManaCost::Green = green;
    ManaCost::Blue = blue;
    ManaCost::Red = red;
    ManaCost::White = white;
    ManaCost::Black = black;
    ManaCost::Colorless = colorless;
}

std::string ManaCost::GetAllManaCosts() {
    std::string manaCosts = "";
    int green = ManaCost::Green;
    int blue = ManaCost::Blue;
    int red = ManaCost::Red;
    int white = ManaCost::White;
    int black = ManaCost::Black;
    int colorless = ManaCost::Colorless;

    if (green != 0){
        manaCosts += "Green " + std::to_string(green) + " ";
    }
    if (blue != 0){
        manaCosts += "Blue " + std::to_string(blue) + " ";
    }
    if (red != 0){
        manaCosts += "Red " + std::to_string(red) + " ";
    }
    if (white != 0){
        manaCosts += "White " + std::to_string(white) + " ";
    }
    if (black != 0){
        manaCosts += "Black " + std::to_string(black) + " ";
    }
    if (colorless != 0){
        manaCosts += "Colorless " + std::to_string(colorless) + " ";
    }

    return manaCosts;
}

int ManaCost::GetGreen(){
    return ManaCost::Green;
}

int ManaCost::GetBlue() {
    return ManaCost::Blue;
}

int ManaCost::GetRed() {
    return ManaCost::Red;
}

int ManaCost::GetWhite() {
    return ManaCost::White;
}

int ManaCost::GetBlack() {
    return ManaCost::Black;
}

int ManaCost::GetColorless(){
    return ManaCost::Colorless;
}
