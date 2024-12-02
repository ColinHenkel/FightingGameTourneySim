/* Players Class */

#include "Player.h"
using namespace std;

// constructor
Player::Player(int id, const string& name) : id(id), name(name), eliminated(false) {}

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

// setters
void Player::markEliminated() {
    eliminated = true;
}

void Player::reset() {
    eliminated = false;
}

// string representation
string Player::toString() const {
    return "Player[ID: " + to_string(id) + ", Name: " + name + ", Eliminated: " + (eliminated ? "Yes" : "No") + "]";
}
