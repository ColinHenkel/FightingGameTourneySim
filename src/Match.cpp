/* Match Class */

#include "Match.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// constructor
Match::Match(Player* player1, Player* player2) : player1(player1), player2(player2), winner(nullptr), loser(nullptr) {}

// getters
Player* Match::getPlayer1() const {
    return player1;
}

Player* Match::getPlayer2() const {
    return player2;
}

Player* Match::getWinner() const {
    return winner;
}

Player* Match::getLoser() const {
    return loser;
}

// play match
void Match::playMatch() {
    if (!player1 || !player2) {
        std::cerr << "Error: Match cannot be played without two players." << std::endl;
        return;
    }

    // seed random number generator for first time
    static bool seeded = false;
    if (!seeded) {
        srand(time(nullptr));
        seeded = true;
    }

    // randomly determine winner 50/50
    if (rand() % 2 == 0) {
        winner = player1;
        loser = player2;
    } else {
        winner = player2;
        loser = player1;
    }

    // mark loser as eliminated
    loser->markEliminated();
}

// get match summary
string Match::getMatchSummary() const {
    if (!winner || !loser) {
        return "Match has not been played yet.";
    }

    return "Match: " + player1->getName() + " vs. " + player2->getName() + "\n"
        + "Winner: " + winner->getName() + "\n"
        + "Loser: " + loser->getName();
}
