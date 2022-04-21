#ifndef MTG_MANACOST_H
#define MTG_MANACOST_H
#include <iostream>

class ManaCost {
protected:
    int Green;
    int Blue;
    int Red;
    int White;
    int Black;
    int Colorless;

public:
    void InitializeManaCost(int green, int blue, int red, int white, int black, int colorless);
    std::string GetAllManaCosts();

    int GetGreen();
    int GetBlue();
    int GetRed();
    int GetWhite();
    int GetBlack();
    int GetColorless();
};

#endif //MTG_MANACOST_H

