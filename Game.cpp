#include "Game.h"

void Game::CreatePlayer1Deck() {
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Plains", "Land", "White"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Plains", "Land", "White"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Plains", "Land", "White"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Plains", "Land", "White"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Plains", "Land", "White"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Forest", "Land", "Green"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Forest", "Land", "Green"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Forest", "Land", "Green"));
    Game::player1->AddCardToDeck(std::make_shared<landCard>("Island", "Land", "Blue"));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Soldier", "Creature", 0, 0, 0, 1, 0, 0, "White", 1, 1, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Soldier", "Creature", 0, 0, 0, 1, 0, 0, "White", 1, 1, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Soldier", "Creature", 0, 0, 0, 1, 0, 0, "White", 1, 1, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Armored Pegasus", "Creature", 0, 0, 0, 1, 0, 1, "White", 1, 2, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Armored Pegasus", "Creature", 0, 0, 0, 1, 0, 1, "White", 1, 2, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("White Knight", "Creature", 0, 0, 0, 2, 0, 0, "White", 2, 2, true, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("White Knight", "Creature", 0, 0, 0, 2, 0, 0, "White", 2, 2, true, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Angry Bear", "Creature", 1, 0, 0, 0, 0, 2, "Green", 3, 2, false, true));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Guard", "Creature", 0, 0, 0, 2, 0, 2, "White", 2, 5, false, false));
    Game::player1->AddCardToDeck(std::make_shared<creatureCard>("Werewolf", "Creature", 1, 0, 0, 1, 0, 2, "Green", 4, 6, false, true));
    Game::player1->AddCardToDeck(std::make_shared<sorceryCard>("Disenchant", "Sorcery", 0, 0, 0, 1, 0, 1, "White", std::make_shared<DestroyEnchantmentEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<sorceryCard>("Lightning Bolt", "Sorcery", 1, 0, 0, 0, 0, 1, "Green", std::make_shared<Deal2DamageToCreatureOrPlayerEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<sorceryCard>("Flood", "Sorcery", 1, 0, 0, 1, 0, 1, "Green", std::make_shared<DestroyLandEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<sorceryCard>("Flood", "Sorcery", 1, 0, 0, 1, 0, 1, "Green", std::make_shared<DestroyLandEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<enchantmentCard>("Rage", "Enchantment", 1, 0, 0, 0, 0, 0, "Green", std::make_shared<TargetGainTrampleEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<enchantmentCard>("Holy War", "Enchantment", 0, 0, 0, 1, 0, 1, "White", std::make_shared<AllColorGainStatsEffect>()));
    Game::player1->AddCardToDeck(std::make_shared<enchantmentCard>("Holy War", "Enchantment", 0, 0, 0, 1, 0, 1, "White", std::make_shared<AllColorGainStatsEffect>()));

    Game::player1->ShuffleDeck();
}

void Game::CreatePlayer2Deck() {
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Swamp", "Land", "Black"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Swamp", "Land", "Black"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Swamp", "Land", "Black"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Swamp", "Land", "Black"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Swamp", "Land", "Black"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Mountain", "Land", "Red"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Mountain", "Land", "Red"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Mountain", "Land", "Red"));
    Game::player2->AddCardToDeck(std::make_shared<landCard>("Island", "Land", "Blue"));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Skeleton", "Creature", 0, 0, 0, 0, 1, 0, "Black", 1, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Skeleton", "Creature", 0, 0, 0, 0, 1, 0, "Black", 1, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Skeleton", "Creature", 0, 0, 0, 0, 1, 0, "Black", 1, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Ghost", "Creature", 0, 0, 0, 0, 1, 1, "Black", 2, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Ghost", "Creature", 0, 0, 0, 0, 1, 1, "Black", 2, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Black Knight", "Creature", 0, 0, 0, 0, 2, 0, "Black", 2, 2, true, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Black Knight", "Creature", 0, 0, 0, 0, 2, 0, "Black", 2, 2, true, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Orc Maniac", "Creature", 0, 0, 1, 0, 0, 2, "Red", 4, 1, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Hob Goblin", "Creature", 0, 0, 1, 0, 1, 1, "Red", 3, 3, false, false));
    Game::player2->AddCardToDeck(std::make_shared<creatureCard>("Vampire", "Creature", 0, 0, 0, 0, 1, 3, "Black", 6, 3, false, false));
    Game::player2->AddCardToDeck(std::make_shared<sorceryCard>("Reanimate", "Sorcery", 0, 0, 0, 0, 1, 0, "Black", std::make_shared<ReturnDiscardToHandEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<sorceryCard>("Plague", "Sorcery", 0, 0, 0, 0, 1, 2, "Black", std::make_shared<Deal1DamageToAllCreaturesEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<sorceryCard>("Terror", "Sorcery", 0, 0, 0, 0, 1, 1, "Black", std::make_shared<DestroyCreatureEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<sorceryCard>("Terror", "Sorcery", 0, 0, 0, 0, 1, 1, "Black", std::make_shared<DestroyCreatureEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<enchantmentCard>("Unholy War", "Enchantment", 0, 0, 0, 0, 1, 1, "Black", std::make_shared<AllColorGainStatsEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<enchantmentCard>("Restrain", "Enchantment", 0, 0, 1, 0, 0, 2, "Red", std::make_shared<AllColorLoseTrampleEffect>()));
    Game::player2->AddCardToDeck(std::make_shared<enchantmentCard>("Slow", "Enchantment", 0, 0, 0, 0, 1, 0, "Black", std::make_shared<TargetLoseFirstStrikeEffect>()));

    Game::player2->ShuffleDeck();
}

Game::Game(std::string player1, std::string player2) {
    Game::player1 = std::make_shared<Player>(player1);
    Game::player2 = std::make_shared<Player>(player2);

    Game::activePlayer = Game::player1;
    Game::otherPlayer = Game::player2;

    std::cout << "----------- Magic the Gathering Lite -----------" << std::endl;
    Player::ActivateCheatMode(Game::activePlayer, Game::otherPlayer);
}

void Game::DrawFirstCards() {
    for (int i = 0; i < 5; i++) {
        Game::player1->DrawCard();
        Game::player2->DrawCard();
    }
}

void Game::ChangePlayer() {
    std::shared_ptr<Player> temp = Game::activePlayer;
    Game::activePlayer = otherPlayer;
    Game::otherPlayer = temp;
}

void Game::PrintWhichCardsInPlay() {
    std::cout << "Cards in the play of " << player1->GetPlayerName() << ":" << std::endl;
    for (int i = 0, size = player1->GetInPlay().size(); i < size; i++){
        std::cout << "#" << i << ": " << player1->GetInPlay().at(i)->PrintAll() << std::endl;
        if (i != size - 1) std::cout << "-------" << std::endl;
    }
    std::cout << "---------------------------------------------------------------------------" << std::endl;
    std::cout << "Cards in the play of " << player2->GetPlayerName() << ":" << std::endl;
    for (int i = 0, size = player2->GetInPlay().size(); i < size; i++){
        std::cout << "#" << i << ": " << player2->GetInPlay().at(i)->PrintAll() << std::endl;
        if (i != size - 1) std::cout << "-------" << std::endl;
    }
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

void Game::PrintWhichCardsInHand() {
    std::cout << activePlayer->GetPlayerName() << " has these cards: " << std::endl;
    for (unsigned int i = 0, size = activePlayer->GetHand().size(); i < size; i++){
        std::cout << "#" << i << ": " << activePlayer->GetHand().at(i)->PrintAll() << std::endl;
        if (i != size - 1) std::cout << "-------" << std::endl;
    }
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

void Game::PrintHealths() {
    std::cout << "Player 1's HP is: " << player1->GetHP() << std::endl;
    std::cout << "Player 2's HP is: " << player2->GetHP() << std::endl;
    std::cout << "---------------------------------------------------------------------------" << std::endl;
}

void Game::ResetCreaturesHP(){
    for (auto creatureCard : Game::activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            creatureCard->ResetHP();
        }
    }
    for (auto creatureCard : Game::otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            creatureCard->ResetHP();
        }
    }
}

void Game::CalculateManaOfPlayer() {
    int green = 0, blue = 0, red = 0, white = 0, black = 0;
    for (auto currentCard : activePlayer->GetInPlay()){
        if (currentCard->GetType() == "Land" && !currentCard->IsTapped()){
            if (currentCard->GetColor() == "Green") green++;
            else if (currentCard->GetColor() == "Blue") blue++;
            else if (currentCard->GetColor() == "Red") red++;
            else if (currentCard->GetColor() == "White") white++;
            else if (currentCard->GetColor() == "Black") black++;
        }
    }
    activePlayer->CalculateAvailableMana(green, blue, red, white, black);
}

bool Game::CanEfford(std::shared_ptr<Card> currentCard){
    int ifUsedCurrentMana = Game::activePlayer->getUnusedTotalMana() - currentCard->GetManaCost().GetGreen() - currentCard->GetManaCost().GetBlue()
                            - currentCard->GetManaCost().GetRed() - currentCard->GetManaCost().GetWhite() - currentCard->GetManaCost().GetBlack();

    if (currentCard->GetManaCost().GetGreen() > activePlayer->getUnusedGreenMana()) return false;
    if (currentCard->GetManaCost().GetBlue() > activePlayer->getUnusedBlueMana()) return false;
    if (currentCard->GetManaCost().GetRed() > activePlayer->getUnusedRedMana()) return false;
    if (currentCard->GetManaCost().GetWhite() > activePlayer->getUnusedWhiteMana()) return false;
    if (currentCard->GetManaCost().GetBlack() > activePlayer->getUnusedBlackMana()) return false;
    if (currentCard->GetManaCost().GetColorless() > ifUsedCurrentMana) return false;

    return true;
}

void Game::PayManaOfCard(std::shared_ptr<Card> currentCard) {
    int green = currentCard->GetManaCost().GetGreen();
    int blue = currentCard->GetManaCost().GetBlue();
    int red = currentCard->GetManaCost().GetRed();
    int white = currentCard->GetManaCost().GetWhite();
    int black = currentCard->GetManaCost().GetBlack();

    for (auto card : activePlayer->GetInPlay()){
        if (card->GetType() == "Land"){
            if (green > 0  && card->GetColor() == "Green" && !card->IsTapped()){
                card->TapCard();
                std::cout << "-------" << std::endl;
                green--;
            }
            else if(blue > 0  && card->GetColor() == "Blue" && !card->IsTapped()){
                card->TapCard();
                std::cout << "-------" << std::endl;
                blue--;
            }
            else if (red > 0  && card->GetColor() == "Red" && !card->IsTapped()){
                card->TapCard();
                std::cout << "-------" << std::endl;
                red--;
            }
            else if(white > 0  && card->GetColor() == "White" && !card->IsTapped()){
                card->TapCard();
                std::cout << "-------" << std::endl;
                white--;
            }
            else if(black > 0  && card->GetColor() == "Black" && !card->IsTapped()){
                card->TapCard();
                std::cout << "-------" << std::endl;
                black--;
            }
        }
    }
    int currentColorless = currentCard->GetManaCost().GetColorless();
    if (currentColorless > 0){
        std::cout << "Land card(s) that you can use for colorless mana(s):" << std::endl;
        std::cout << "---------------------------------------------------------------------------" << std::endl;
        for (unsigned int i = 0, size = activePlayer->GetInPlay().size(); i < size; i++){
            std::shared_ptr<Card> currentLandCard = activePlayer->GetInPlay().at(i);
            if (currentLandCard->GetType() == "Land" && !currentLandCard->IsTapped()){
                std::cout << "#" << i << " " << currentLandCard->PrintAll() << std::endl;
                std::cout << "-------" << std::endl;
            }
        }
        int selection;
        std::cout << "Select land card(s) that you want to use for colorless mana(s):" << std::endl;
        while (currentColorless > 0){
            std::cout << "You need to tap " << currentColorless << " land cards:";
            std::cin >> selection;
            if (selection < activePlayer->GetInPlay().size()){
                if (activePlayer->GetInPlay().at(selection)->GetType() == "Land" && !activePlayer->GetInPlay().at(selection)->IsTapped()){
                    activePlayer->GetInPlay().at(selection)->TapCard();
                    std::cout << "-------" << std::endl;
                    currentColorless--;
                }
                else {
                    std::cout << "Wrong card!" << std::endl;
                }
            }
            else {
                std::cout << "Wrong card!" << std::endl;
            }
        }
        std::cout << "###########################################################################" << std::endl;
        std::cout << "###########################################################################" << std::endl;
    }
}

bool Game::PlayingLandCards(std::shared_ptr<Card> currentCard, int input){
    if (activePlayer->GetPlayedLandCardThisTurn()){
        std::cout << "You can't play more than 1 land card in a turn!" << std::endl;
        std::cout << "-------" << std::endl;
        return false;
    }
    else {
        Game::activePlayer->SendCardFromHandToInPlay(input);
        Game::activePlayer->PlayedLandCard();
        std::cout << activePlayer->GetPlayerName() << " played " << currentCard->getCardName() << std::endl;
        std::cout << "-------" << std::endl;
        return true;
    }
}

bool Game::PlayingCreatureCards(std::shared_ptr<Card> currentCard, int input){
    if (Game::CanEfford(currentCard)){
        Game::PayManaOfCard(currentCard);
        currentCard->ControlEffect(activePlayer, otherPlayer);
        Game::activePlayer->SendCardFromHandToInPlay(input);
        std::cout << activePlayer->GetPlayerName() << " played " << currentCard->getCardName() << std::endl;
        std::cout << "-------" << std::endl;
        return true;
    }

    else {
        std::cout << "You cant effort that!" << std::endl;
        std::cout << "-------" << std::endl;
        return false;
    }
}

bool Game::PlayingSorceryCards(std::shared_ptr<Card> currentCard, int input){
    if (Game::CanEfford(currentCard)){
        Game::PayManaOfCard(currentCard);
        std::cout << activePlayer->GetPlayerName() << " played " << currentCard->getCardName() << std::endl;
        std::cout << "-------" << std::endl;
        Game::activePlayer->HandGetCard(input)->GetEffect()->UseEffect(activePlayer, otherPlayer, Game::activePlayer->HandGetCard(input)->getCardName());
        Game::activePlayer->SendCardFromHandToDiscard(input);
        return true;
    }

    else {
        std::cout << "You cant effort that!" << std::endl;
        std::cout << "-------" << std::endl;
        return false;
    }
}

bool Game::PlayingEnchantmentCards(std::shared_ptr<Card> currentCard, int input){
    if (Game::CanEfford(currentCard)){
        Game::PayManaOfCard(currentCard);
        std::cout << activePlayer->GetPlayerName() << " played " << currentCard->getCardName() << std::endl;
        std::cout << "-------" << std::endl;
        Game::activePlayer->HandGetCard(input)->GetEffect()->UseEffect(activePlayer, otherPlayer, Game::activePlayer->HandGetCard(input)->getCardName());
        Game::activePlayer->SendCardFromHandToInPlay(input);
        return true;
    }

    else {
        std::cout << "You cant effort that!" << std::endl;
        std::cout << "-------" << std::endl;
        return false;
    }
}

int Game::GetNumberFromPlayer(){
    int input = 99;
    while(!(std::cin >> input)){
        std::cin.clear();
        std::cout << "Invalid input. Choose the card again!: ";
        std::cin.ignore(1000, '\n');
    }
    std::cout << "###########################################################################" << std::endl;
    std::cout << "###########################################################################" << std::endl;
    return input;
}

void Game::CheckIfAnyDeadCreature() {
    int i = 0;
    for (auto creatureCard : Game::activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (creatureCard->GetHP() <= 0){
                creatureCard->ResetCard();
                Game::activePlayer->SendCardFromInplayToDiscard(i--);
            }
        }
        i++;
    }

    int k = 0;
    for (auto creatureCard : Game::otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature"){
            if (creatureCard->GetHP() <= 0){
                creatureCard->ResetCard();
                Game::otherPlayer->SendCardFromInplayToDiscard(k--);
            }
        }
        k++;
    }
}

bool Game::CheckIfAnyDeadPlayer() {
    if (activePlayer->IsDead() && otherPlayer->IsDead()){
        std::cout << "Both of player died. There is no winner" << std::endl;
        std::cout << player1->GetPlayerName() << " HP is: " << player1->GetHP() << std::endl;
        std::cout << player2->GetPlayerName() << " HP is: " << player2->GetHP() << std::endl;
        std::cout << "-------" << std::endl;
        return true;
    }

    else if (activePlayer->IsDead()){
        std::cout << activePlayer->GetPlayerName() << " died." << std::endl;
        std::cout << otherPlayer->GetPlayerName() << " Won!" << std::endl;
        std::cout << player1->GetPlayerName() << " HP is: " << player1->GetHP() << std::endl;
        std::cout << player2->GetPlayerName() << " HP is: " << player2->GetHP() << std::endl;
        std::cout << "-------" << std::endl;
        return true;
    }

    else if (otherPlayer->IsDead()){
        std::cout << otherPlayer->GetPlayerName() << " died." << std::endl;
        std::cout << activePlayer->GetPlayerName() << " Won!" << std::endl;
        std::cout << player1->GetPlayerName() << " HP is: " << player1->GetHP() << std::endl;
        std::cout << player2->GetPlayerName() << " HP is: " << player2->GetHP() << std::endl;
        std::cout << "-------" << std::endl;
        return true;
    }

    else {
        return false;
    }
}

void Game::PlayCardPhase(){
    bool isBought = true;
    while (true) {
        if (isBought){
            Game::PrintWhichCardsInPlay();
            Game::PrintHealths();
            Game::CalculateManaOfPlayer();
            std::cout << activePlayer->GetAvailableMana();
            std::cout << "---------------------------------------------------------------------------" << std::endl;
            Game::PrintWhichCardsInHand();
        }

        std::cout << "Choose Card For Play (Enter '9' if you do not want to play any card):";

        int input;
        input = Game::GetNumberFromPlayer();

        while (input >= activePlayer->GetHand().size() && input != 9){
            std::cout << "Please enter a number that lower than your hand size!:";
            input = Game::GetNumberFromPlayer();
        }

        std::cout << "-------" << std::endl;

        if (input == 9) break;

        std::shared_ptr<Card>currentCard = activePlayer->HandGetCard(input);
        std::string currentCardType = currentCard->GetType();

        if (currentCardType == "Land"){
            isBought = Game::PlayingLandCards(currentCard, input);
        }

        else if (currentCardType == "Creature"){
            isBought = Game::PlayingCreatureCards(currentCard, input);
        }

        else if (currentCardType == "Sorcery"){
            isBought = Game::PlayingSorceryCards(currentCard, input);
        }

        else if (currentCardType == "Enchantment"){
            isBought = Game::PlayingEnchantmentCards(currentCard, input);
        }

        Game::CheckIfAnyDeadCreature();
    }
}

void Game::CombatPhase() {
    int canAttackCreatureNumber = 0;
    for(auto creatureCard : activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped() && !creatureCard->GetSummoningSickness()){
            canAttackCreatureNumber++;
        }
    }
    if (canAttackCreatureNumber == 0){
        std::cout << activePlayer->GetPlayerName() << " has no creature that can attack with." << std::endl;
        std::cout << "---------------------------------------------------------------------------" << std::endl;
        return;
    }

    Game::PrintWhichCardsInPlay();
    std::cout << "---------------------------------------------------------------------------" << std::endl;

    std::cout << activePlayer->GetPlayerName() << "'s Card(s) that can attack with: " << std::endl;
    int i = 0;
    for(auto creatureCard : activePlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped() && !creatureCard->GetSummoningSickness()){
            std::cout << "#" << i << ": " << creatureCard->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        i++;
    }

    std::cout << "---------------------------------------------------------------------------" << std::endl;

    std::cout << otherPlayer->GetPlayerName() << "'s creature(s) that can defend with: " << std::endl;
    int k = 0;
    for(auto creatureCard : otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped()){
            std::cout << "#" << k << ": " << creatureCard->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        k++;
    }

    std::cout << "(" << activePlayer->GetPlayerName() << ") How many creatures do you want to attack with ('0' for non)?:";

    int attackingCreatureNum = Game::GetNumberFromPlayer();
    while (attackingCreatureNum > canAttackCreatureNumber || attackingCreatureNum < 0){
        std::cout << "Wrong input, please try again!:";
        attackingCreatureNum = Game::GetNumberFromPlayer();
    }

    if (attackingCreatureNum == 0){
        return;
    }

    std::vector<std::shared_ptr<Card>> attackingCreatures;
    std::vector<std::shared_ptr<Card>> defendingCreatures;

    for (int x = 0; x < attackingCreatureNum; x++){
        std::cout << activePlayer->GetPlayerName() << "'s Card(s) that can attack with: " << std::endl;
        int a = 0;
        for(auto creatureCard : activePlayer->GetInPlay()){
            if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped() && !creatureCard->GetSummoningSickness()){
                std::cout << "#" << a << ": " << creatureCard->PrintAll() << std::endl;
                std::cout << "-------" << std::endl;
            }
            a++;
        }

        std::cout << "(" << activePlayer->GetPlayerName() << ") Choose your " << x + 1 << ". attacking creature:";
        int attackingCreaturePlace = Game::GetNumberFromPlayer();

        while (attackingCreaturePlace < 0 || attackingCreaturePlace >= activePlayer->GetInPlay().size() ||
            !(activePlayer->GetInPlay().at(attackingCreaturePlace)->GetType() == "Creature") || activePlayer->GetInPlay().at(attackingCreaturePlace)->IsTapped()){
            std::cout << "Wrong input, please try again!:";
            attackingCreaturePlace = Game::GetNumberFromPlayer();
        }

        activePlayer->GetInPlay().at(attackingCreaturePlace)->TapCard();
        attackingCreatures.push_back(activePlayer->GetInPlay().at(attackingCreaturePlace));
        defendingCreatures.push_back(nullptr);
    }

    std::cout << "---------------------------------------------------------------------------" << std::endl;

    int canDefendCreatureNumber = 0;
    for(auto creatureCard : otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped()){
            canDefendCreatureNumber++;
        }
    }

    if (canDefendCreatureNumber == 0){
        std::cout << "-------" << std::endl;
        std::cout << otherPlayer->GetPlayerName() << " has no creature that can defend with." << std::endl;
        std::cout << "---------------------------------------------------------------------------" << std::endl;
        for (unsigned int t = 0, size = attackingCreatures.size(); t < size; t++){
            attackingCreatures.at(t)->AttackToCard(defendingCreatures.at(t), otherPlayer);
        }
        Game::CheckIfAnyDeadCreature();
        return;
    }

    std::cout << activePlayer->GetPlayerName() << "'s attacking creature(s)" << std::endl;
    i = 0;
    for (auto card : attackingCreatures){
        if (!card->GetIsSelected()){
            std::cout << "#" << i++ << ": " << card->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
    }

    std::cout << "---------------------------------------------------------------------------" << std::endl;
    std::cout << otherPlayer->GetPlayerName() << "'s creature(s) that can defend with: " << std::endl;
    int u = 0;
    for(auto creatureCard : otherPlayer->GetInPlay()){
        if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped()){
            std::cout << "#" << u << ": " << creatureCard->PrintAll() << std::endl;
            std::cout << "-------" << std::endl;
        }
        u++;
    }

    std::cout << "(" << otherPlayer->GetPlayerName() << ") How many creatures do you want to defend with ('0' for non)?:";

    int defendingCreatureNum = Game::GetNumberFromPlayer();
    while (defendingCreatureNum > canDefendCreatureNumber || defendingCreatureNum < 0 || defendingCreatureNum > attackingCreatureNum){
        std::cout << "Wrong input, please try again!:";
        defendingCreatureNum = Game::GetNumberFromPlayer();
    }

    for (int y = 0; y < defendingCreatureNum; y++){
        std::cout << otherPlayer->GetPlayerName() << "'s creature(s) that can defend with: " << std::endl;
        int k = 0;
        for(auto creatureCard : otherPlayer->GetInPlay()){
            if (creatureCard->GetType() == "Creature" && !creatureCard->IsTapped() && !creatureCard->GetIsSelected()){
                std::cout << "#" << k << ": " << creatureCard->PrintAll() << std::endl;
                std::cout << "-------" << std::endl;
            }
            k++;
        }
        std::cout << "(" << otherPlayer->GetPlayerName() << ") Choose your " << y + 1 << ". defending creature:";
        int defendingCreaturePlace = Game::GetNumberFromPlayer();

        while (defendingCreaturePlace < 0 || defendingCreaturePlace >= otherPlayer->GetInPlay().size() ||
               !(otherPlayer->GetInPlay().at(defendingCreaturePlace)->GetType() == "Creature") || otherPlayer->GetInPlay().at(defendingCreaturePlace)->IsTapped() ||
                otherPlayer->GetInPlay().at(defendingCreaturePlace)->GetIsSelected()){
            std::cout << "Wrong input, please try again!:";
            defendingCreaturePlace = Game::GetNumberFromPlayer();
        }

        std::cout << "---------------------------------------------------------------------------" << std::endl;

        std::cout << activePlayer->GetPlayerName() << "'s attacking cards that you can defend against it: " << std::endl;

        i = 0;
        for (auto card : attackingCreatures){
            if (!card->GetIsSelected()){
                std::cout << "#" << i << ": " << card->PrintAll() << std::endl;
                std::cout << "-------" << std::endl;
            }
            i++;
        }

        std::cout << "(" << otherPlayer->GetPlayerName() << ") choose and attacking card that you want to defend:";

        int selectedAttackingCreature = Game::GetNumberFromPlayer();

        while (selectedAttackingCreature < 0 || selectedAttackingCreature >= attackingCreatures.size() ||
                attackingCreatures.at(selectedAttackingCreature)->GetIsSelected()){
            std::cout << "Wrong input, please try again!:";
            selectedAttackingCreature = Game::GetNumberFromPlayer();
        }

        std::cout << "---------------------------------------------------------------------------" << std::endl;
        defendingCreatures.at(selectedAttackingCreature) = otherPlayer->GetInPlay().at(defendingCreaturePlace);
        defendingCreatures.at(selectedAttackingCreature)->SelectIt();
        attackingCreatures.at(selectedAttackingCreature)->SelectIt();
    }

    for (unsigned int t = 0, size = attackingCreatures.size(); t < size; t++){
        attackingCreatures.at(t)->AttackToCard(defendingCreatures.at(t), otherPlayer);
    }

    Game::CheckIfAnyDeadCreature();
}

void Game::DrawAndUntapCardPhase(){
    activePlayer->ResetPlayedLandCardThisTurn();
    activePlayer->DrawCard();
    activePlayer->UntapAll();
    activePlayer->UnselectAll();
    otherPlayer->UnselectAll();
}

void Game::GameStart() {
    Game::CreatePlayer1Deck();
    Game::CreatePlayer2Deck();

    Game::DrawFirstCards();

    int turnCounter = 1;
    int roundCounter = 1;

    while (true){
        Game::ResetCreaturesHP();

        Game::DrawAndUntapCardPhase();

        std::cout << "----------- " << activePlayer->GetPlayerName() << "'s Turn " << "-----------" << std::endl;

        std::cout << "----------- " << activePlayer->GetPlayerName() << "'s 1. Play Phase" << " -----------" << std::endl;

        Game::PlayCardPhase();

        if (Game::CheckIfAnyDeadPlayer()) break;

        std::cout << "----------- " << activePlayer->GetPlayerName() << "'s Combat Phase" << " -----------" << std::endl;

        Game::CombatPhase();

        if (Game::CheckIfAnyDeadPlayer()) break;

        std::cout << "----------- " << activePlayer->GetPlayerName() << "'s 2. Play Phase" << " -----------" << std::endl;

        Game::PlayCardPhase();

        if (Game::CheckIfAnyDeadPlayer()) break;

        std::cout << "----------- " << "End of " << activePlayer->GetPlayerName() << "'s Turn" << " -----------" << std::endl;

        Game::ChangePlayer();

        if (turnCounter % 2 == 0){
            std::cout << "----------- " << "End of Round " << roundCounter++ << " -----------" << std::endl;
        }

        turnCounter++;
    }
}





