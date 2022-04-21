#ifndef MTG_CREATURECARD_H
#define MTG_CREATURECARD_H

#include "Card.h"

class creatureCard : public Card{
protected:
    ManaCost manaCost;
    std::string color;
    int attackPower;
    int initialAttackPower;
    int baseHP;
    int currentHP;
    int initialHP;
    bool hasFirstStrike;
    bool initialHasFirstStrike;
    bool hasTrample;
    bool initialHasTrample;
    bool isTapped = false;
    bool hasSummoningSickness = true;
    bool isSelected = false;

public:
    creatureCard(std::string name, std::string type, int g, int l, int r, int w, int b, int c, std::string color,
                 int attackPower, int baseHP, bool hasFS, bool hasTrample);

    void Untap() override;
    std::string PrintAll() override;
    ManaCost GetManaCost() override;
    void CreatureCardStatSetStats(int plusAP, int plusHP) override;
    void TakeDamage(int damage) override;
    void SetTrample(bool trampleState) override;
    void SetFirstStrike(bool firstStrikeState) override;
    void ControlEffect(std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer) override;
    bool GetInitialTrample() override;
    bool GetInitialFirstStrike() override;
    std::string GetColor() override;
    void ResetHP() override;
    int GetHP() override;
    void ResetCard() override;
    bool IsTapped() override;
    void AttackToCard(std::shared_ptr<Card> defendingCard, std::shared_ptr<Player> otherPlayer) override;
    bool GetFirstStrike() override;
    int GetAttackPower() override;
    bool GetSummoningSickness() override;
    void TapCard() override;
    bool GetIsSelected() override;
    void SelectIt() override;
    void UnSelectIt() override;
};

#endif //MTG_CREATURECARD_H