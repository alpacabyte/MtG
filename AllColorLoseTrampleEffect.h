#ifndef MTG_ALLCOLORLOSETRAMPLEEFFECT_H
#define MTG_ALLCOLORLOSETRAMPLEEFFECT_H

#include "Effect.h"

class AllColorLoseTrampleEffect : public Effect{
public:
    void UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) override;
    void DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) override;
};

#endif //MTG_ALLCOLORLOSETRAMPLEEFFECT_H