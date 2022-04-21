#include "Card.h"

class enchantmentCard : public Card {
protected:
    ManaCost manaCost;
    std::string color;
    std::shared_ptr<Effect> effect;
public:
    enchantmentCard(std::string name, std::string type, int g, int l, int r, int w, int b, int c, std::string color, std::shared_ptr<Effect> effect);
    std::string PrintAll() override;
    ManaCost GetManaCost() override;
    std::shared_ptr<Effect> GetEffect() override;
};