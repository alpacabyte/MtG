#include "Effect.h"

class Deal2DamageToCreatureOrPlayerEffect : public Effect{
public :
    void UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) override;
};