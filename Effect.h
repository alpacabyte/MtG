#ifndef MTG_EFFECT_H
#define MTG_EFFECT_H

#include <iostream>
#include <memory>
class Player;
class Card;

class Effect {
public:
    virtual void UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName);
    virtual void DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName);
};

#endif //MTG_EFFECT_H