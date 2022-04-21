#ifndef MTG_PLAYER_H
#define MTG_PLAYER_H

#include <iostream>
#include "Card.h"
#include <vector>
#include <memory>

class Player {
protected:
    int hp = 15;
    bool isDead = false;
    std::string playerName;
    bool playedLandCardThisTurn = false;

    std::vector<std::shared_ptr<Card>> hand;
    std::vector<std::shared_ptr<Card>> deck;
    std::vector<std::shared_ptr<Card>> inPlay;
    std::vector<std::shared_ptr<Card>> discards;

    int unusedGreenMana = 0;
    int unusedBlueMana = 0;
    int unusedRedMana = 0;
    int unusedWhiteMana = 0;
    int unusedBlackMana = 0;
    int unusedTotalMana = 0;

public:
    Player(std::string name);

    void AddCardToDeck(std::shared_ptr<Card> card);

    void SendCardFromHandToInPlay(int place);

    void SendCardFromHandToDiscard(int place);

    void ShuffleDeck();

    std::shared_ptr<Card> HandGetCard(int i);

    void DrawCard();

    int GetHP() const;

    bool IsDead() const;

    void UntapAll();
    void UnselectAll();

    std::vector<std::shared_ptr<Card>> GetHand();
    std::vector<std::shared_ptr<Card>> GetInPlay();
    std::vector<std::shared_ptr<Card>> GetDiscard();

    std::string GetPlayerName();

    void ResetPlayedLandCardThisTurn();

    bool GetPlayedLandCardThisTurn() const;

    void PlayedLandCard();

    void CalculateAvailableMana(int green, int blue, int red, int white, int black);

    std::string GetAvailableMana();

    int getUnusedGreenMana() const;
    int getUnusedBlueMana() const;
    int getUnusedRedMana() const;
    int getUnusedWhiteMana() const;
    int getUnusedBlackMana() const;
    int getUnusedTotalMana() const;

    void SendCardFromInplayToDiscard(int place, std::shared_ptr<Player>activePlayer, std::shared_ptr<Player> otherPlayer);
    void SendCardFromInplayToDiscard(int place);
    void SendCardFromDiscardToHand(int place);

    void GetDamage(int damage);

    static void ActivateCheatMode(std::shared_ptr<Player> player1, std::shared_ptr<Player> player2);
};

#endif //MTG_PLAYER_H