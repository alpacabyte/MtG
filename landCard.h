#ifndef LANDCARD_H
#define LANDCARD_H
#include "Card.h"

class landCard : public Card{
protected:
    bool isTapped = false;
    std::string manaType;

public:
    landCard(std::string name, std::string type, std::string manaType);
    std::string PrintAll() override;
    std::string GetColor() override;
    bool IsTapped() override;
    void TapCard() override;
    void Untap() override;
};
#endif //LANDCARD_H