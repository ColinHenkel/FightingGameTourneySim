/* Players Class */

#include "Player.h"
using namespace std;

// constructor
Player::Player(int id, const string& name) : id(id), name(name), inWinners(true), eliminated(false) {}

// getters
int Player::getId() const {
    return id;
}

string Player::getName() const {
    return name;
}

bool Player::isEliminated() const {
    return eliminated;
}

bool Player::isInWinners() const {
    return inWinners;
}

// setters
void Player::markEliminated() {
    eliminated = true;
}

void Player::sendToLosers() {
    inWinners = false;
}

void Player::reset() {
    eliminated = false;
}

// string representation
string Player::toString() const {
    return "Player[ID: " + to_string(id) + ", Name: " + name + ", Eliminated: " + (eliminated ? "Yes" : "No") + "]";
}
