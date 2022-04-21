#ifndef MTG_GAME_H
#define MTG_GAME_H

#include "Player.h"

#include "Card.h"
#include "creatureCard.h"
#include "enchantmentCard.h"
#include "landCard.h"
#include "sorceryCard.h"

#include "Effect.h"
#include "AllColorGainStatsEffect.h"
#include "DestroyEnchantmentEffect.h"
#include "AllColorLoseTrampleEffect.h"
#include "Deal1DamageToAllCreaturesEffect.h"
#include "Deal2DamageToCreatureOrPlayerEffect.h"
#include "DestroyCreatureEffect.h"
#include "DestroyLandEffect.h"
#include "ReturnDiscardToHandEffect.h"
#include "TargetGainTrampleEffect.h"
#include "TargetLoseFirstStrikeEffect.h"

class Game {
protected:
    std::shared_ptr<Player> player1;
    std::shared_ptr<Player> player2;
    std::shared_ptr<Player> activePlayer;
    std::shared_ptr<Player> otherPlayer;

public:
    Game(std::string player1, std::string player2);

    void CreatePlayer1Deck();
    void CreatePlayer2Deck();

    void GameStart();

    void DrawFirstCards();

    void ChangePlayer();

    void PrintWhichCardsInPlay();

    void PrintWhichCardsInHand();

    void PrintHealths();

    void CalculateManaOfPlayer();

    bool PlayingLandCards(std::shared_ptr<Card> currentCard, int input);

    bool PlayingCreatureCards(std::shared_ptr<Card> currentCard, int input);

    bool PlayingSorceryCards(std::shared_ptr<Card> currentCard, int input);

    bool PlayingEnchantmentCards(std::shared_ptr<Card> currentCard, int input);

    void PlayCardPhase();

    void CombatPhase();

    void DrawAndUntapCardPhase();

    bool CanEfford(std::shared_ptr<Card> currentCard);

    void PayManaOfCard(std::shared_ptr<Card> currentCard);

    static int GetNumberFromPlayer();

    void ResetCreaturesHP();

    void CheckIfAnyDeadCreature();

    bool CheckIfAnyDeadPlayer();
};
#endif //MTG_GAME_H