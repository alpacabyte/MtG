#ifndef MTG_CARD_H
#define MTG_CARD_H

#include <iostream>
#include "ManaCost.h"
#include "Effect.h"
#include <memory>

class Card {
protected:
    std::string cardName;
    std::string type;
public:
    std::string getCardName();
    virtual void Untap();
    virtual std::string PrintAll();
    std::string GetType();
    virtual std::string GetColor();
    virtual bool IsTapped();
    virtual ManaCost GetManaCost();
    virtual void TapCard();
    virtual void TakeDamage(int damage);
    virtual std::shared_ptr<Effect> GetEffect();
    virtual void SetTrample(bool trampleState);
    virtual void SetFirstStrike(bool firstStrikeState);
    virtual void CreatureCardStatSetStats(int plusAP, int plusHP);
    virtual void ControlEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer);
    virtual bool GetInitialTrample();
    virtual bool GetInitialFirstStrike();
    virtual void ResetHP();
    virtual int GetHP();
    virtual void ResetCard();
    virtual void AttackToCard(std::shared_ptr<Card> defendingCard, std::shared_ptr<Player> otherPlayer);
    virtual bool GetFirstStrike();
    virtual int GetAttackPower();
    virtual bool GetSummoningSickness();
    virtual bool GetIsSelected();
    virtual void SelectIt();
    virtual void UnSelectIt();
};

#endif //MTG_CARD_H