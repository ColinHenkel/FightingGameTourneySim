#ifndef BRACKET_H
#define BRACKET_H

#include <memory>
#include <string>
#include <vector>
#include "Player.h"
#include "Match.h"

class Bracket {
private:
    std::vector<Match*> matches; // all matches in the bracket
    bool isWinnerBracket; // true if this is the winner's bracket, false if this is the loser's bracket

public:

    // constructor
    Bracket(std::vector<Match*> matches, bool isWinnerBracket);

    // getters
    std::vector<Match*> getRemainingMatches() const;
    bool isWinnersBracket() const;

    // methods
    void setupBracket(std::vector<Match*> matches); // sets up the bracket with the given matches
    void playNextRound(); // plays the next round of matches
    std::string getBracketSummary() const; // returns a summary of the bracket
    void resetBracket(); // resets the bracket for a new tournament
};


#endif // BRACKET_H
