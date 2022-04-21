#include "Card.h"

class sorceryCard : public Card{
protected:
    ManaCost manaCost;
    std::string color;
    std::shared_ptr<Effect> effect;
public:
    sorceryCard(std::string name, std::string type, int green, int blue, int red, int white, int black, int colorless, std::string color, std::shared_ptr<Effect> effect);
    std::string PrintAll() override;
    ManaCost GetManaCost() override;
    std::shared_ptr<Effect> GetEffect() override;
};