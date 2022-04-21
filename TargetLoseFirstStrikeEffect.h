#include "Effect.h"

class TargetLoseFirstStrikeEffect : public Effect{
protected:
    std::shared_ptr<Card> onUsedCreatureCard;
public:
    void UseEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) override;
    void DestroyEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer, std::string cardName) override;
};