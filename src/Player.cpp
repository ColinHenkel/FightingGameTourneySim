/* Players Class */

#include "Player.h"
using namespace std;

Player::Player(int id, const string& name) : id(id), name(name), eliminated(false) {}

int Player::getId() const {
    return id;
}

string Player::getName() const {
    return name;
}

bool Player::isEliminated() const {
    return eliminated;
}

void Player::markEliminated() {
    eliminated = true;
}

void Player::reset() {
    eliminated = false;
}

std::string Player::toString() const {
    return "Player[ID: " + to_string(id) + ", Name: " + name + ", Eliminated: " + (eliminated ? "Yes" : "No") + "]";
}
