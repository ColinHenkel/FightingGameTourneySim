#ifndef MATCH_H
#define MATCH_H

#include <memory>
#include <string>
#include <vector>
#include "Player.h"

class Match {
private:
    Player* player1;
    Player* player2;
    Player* winner;
    Player* loser;

public:

    // constructor
    Match(Player* player1, Player* player2);

    // getters
    Player* getPlayer1() const;
    Player* getPlayer2() const;
    Player* getWinner() const;
    Player* getLoser() const;

    // methods
    void playMatch(); // simulates the match and determines winner
    std::string getMatchSummary() const; // returns a summary of the match
};

#endif // MATCH_H