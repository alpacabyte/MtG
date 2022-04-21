#include "Player.h"
#include <algorithm>
#include <random>
#include <ctime>
#include "landCard.h"
#include "sorceryCard.h"
#include "ReturnDiscardToHandEffect.h"

Player::Player(std::string name){
    Player::playerName = name;
}

void Player::AddCardToDeck(std::shared_ptr<Card> card) {
    Player::deck.push_back(card);
}

std::shared_ptr<Card> Player::HandGetCard(int i) {
    return Player::hand.at(i);
}

void Player::ShuffleDeck() {
    srand(unsigned(time(NULL)));
    std::random_shuffle(std::begin(Player::deck), std::end(Player::deck));
}

void Player::DrawCard() {
    if (Player::deck.empty()){
        isDead = true;
        std::cout << Player::playerName << " has no cards in her/his deck.";
    }

    else if (Player::hand.size() < 7){
        Player::hand.push_back(Player::deck.back());
        Player::deck.pop_back();
    }
}

int Player::GetHP() const {
    return Player::hp;
}

bool Player::IsDead() const {
    return Player::isDead;
}

void Player::UntapAll() {
    for (auto card : inPlay){
        card->Untap();
    }
}

void Player::UnselectAll() {
    for (auto card : inPlay){
        card->UnSelectIt();
    }
}

std::vector<std::shared_ptr<Card>> Player::GetHand() {
    return Player::hand;
}

std::vector<std::shared_ptr<Card>> Player::GetInPlay() {
    return Player::inPlay;
}

std::vector<std::shared_ptr<Card>> Player::GetDiscard() {
    return Player::discards;
}

std::string Player::GetPlayerName() {
    return Player::playerName;
}

void Player::SendCardFromHandToInPlay(int place) {
    Player::inPlay.push_back(Player::hand.at(place));
    Player::hand.erase(Player::hand.begin() + place);
}

void Player::SendCardFromHandToDiscard(int place){
    Player::discards.push_back(Player::hand.at(place));
    Player::hand.erase(Player::hand.begin() + place);
}

void Player::SendCardFromInplayToDiscard(int place, std::shared_ptr<Player> activePlayer, std::shared_ptr<Player> otherPlayer){
    if (Player::inPlay.at(place)->GetType() == "Enchantment"){
        Player::inPlay.at(place)->GetEffect()->DestroyEffect(activePlayer, otherPlayer, inPlay.at(place)->getCardName());
    }
    Player::discards.push_back(Player::inPlay.at(place));
    Player::inPlay.erase(Player::inPlay.begin() + place);
}

void Player::SendCardFromDiscardToHand(int place) {
    if (Player::hand.size() < 8){
        Player::discards.at(place)->PrintAll();
        Player::hand.push_back(Player::discards.at(place));
        Player::discards.erase(Player::discards.begin() + place);
    }

    else std::cout << "You could not get the card because your hand is full" << std::endl;

}

void Player::ResetPlayedLandCardThisTurn() {
    playedLandCardThisTurn = false;
}

bool Player::GetPlayedLandCardThisTurn() const {
    return playedLandCardThisTurn;
}

void Player::PlayedLandCard() {
    playedLandCardThisTurn = true;
}

void Player::CalculateAvailableMana(int green, int blue, int red, int white, int black) {
    Player::unusedGreenMana = green;
    Player::unusedBlueMana = blue;
    Player::unusedRedMana = red;
    Player::unusedWhiteMana = white;
    Player::unusedBlackMana = black;
    Player::unusedTotalMana = green + blue + red + white + black;
}

std::string Player::GetAvailableMana() {
    std::string availableMana = playerName + "'s unused manas are:";

    if (Player::unusedGreenMana != 0) availableMana += "\nGreen: " + std::to_string(unusedGreenMana);
    if (Player::unusedBlueMana != 0) availableMana += "\nBlue: " + std::to_string(unusedBlueMana);
    if (Player::unusedRedMana != 0) availableMana += "\nRed: " + std::to_string(unusedRedMana);
    if (Player::unusedWhiteMana != 0) availableMana += "\nWhite: " + std::to_string(unusedWhiteMana);
    if (Player::unusedBlackMana != 0) availableMana += "\nBlack: " + std::to_string(unusedBlackMana);

    availableMana += "\n";

    return availableMana;
}

int Player::getUnusedGreenMana() const{
    return unusedGreenMana;
}

int Player::getUnusedBlueMana() const{
    return unusedBlueMana;
}

int Player::getUnusedRedMana() const{
    return unusedRedMana;
}

int Player::getUnusedWhiteMana() const{
    return unusedWhiteMana;
}

int Player::getUnusedBlackMana() const{
    return unusedBlackMana;
}

int Player::getUnusedTotalMana() const {
    return Player::unusedTotalMana;
}

void Player::GetDamage(int damage) {
    Player::hp -= damage;

    std::cout << Player::playerName << " got " << damage << " damage" << std::endl;

    if (Player::hp < 0){
        Player::isDead = true;
    }
}

void Player::ActivateCheatMode(std::shared_ptr<Player> player1, std::shared_ptr<Player> player2) {
    std::string input;
    std::cout << "Do you want to activate the cheat mode? (You will have 7 land cards in play at start) (y/n):";
    std::cin >> input;

    if (input == "y"){
        player1->inPlay.push_back(std::make_shared<landCard>("Island", "Land", "Blue"));
        player1->inPlay.push_back(std::make_shared<landCard>("Plains", "Land", "White"));
        player1->inPlay.push_back(std::make_shared<landCard>("Plains", "Land", "White"));
        player1->inPlay.push_back(std::make_shared<landCard>("Plains", "Land", "White"));
        player1->inPlay.push_back(std::make_shared<landCard>("Forest", "Land", "Green"));
        player1->inPlay.push_back(std::make_shared<landCard>("Forest", "Land", "Green"));
        player1->inPlay.push_back(std::make_shared<landCard>("Forest", "Land", "Green"));

        player2->inPlay.push_back(std::make_shared<landCard>("Swamp", "Land", "Black"));
        player2->inPlay.push_back(std::make_shared<landCard>("Swamp", "Land", "Black"));
        player2->inPlay.push_back(std::make_shared<landCard>("Swamp", "Land", "Black"));
        player2->inPlay.push_back(std::make_shared<landCard>("Mountain", "Land", "Red"));
        player2->inPlay.push_back(std::make_shared<landCard>("Mountain", "Land", "Red"));
        player2->inPlay.push_back(std::make_shared<landCard>("Mountain", "Land", "Red"));
        player2->inPlay.push_back(std::make_shared<landCard>("Island", "Land", "Blue"));
    }
}

void Player::SendCardFromInplayToDiscard(int place) {
    Player::discards.push_back(Player::inPlay.at(place));
    Player::inPlay.erase(Player::inPlay.begin() + place);
}





