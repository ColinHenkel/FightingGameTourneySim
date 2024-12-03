/* Bracket Class */

#include "Bracket.h"
#include <iostream>
#include <sstream>
using namespace std;

// constructor
Bracket::Bracket(std::vector<Match*> matches, bool isWinnerBracket) : matches(move(matches)), isWinnerBracket(isWinnerBracket) {}

// getters
vector<Match*> Bracket::getRemainingMatches() const {
    vector<Match*> remaining;
    for (Match* match : matches) {
        if (!match->getWinner()) { // if match hasn't been played yet
            remaining.push_back(match);
        }
    }

    return remaining;
}

bool Bracket::isWinnersBracket() const {
    return isWinnerBracket;
}

// setup initial bracket
void Bracket::setupBracket(vector<Match*> newMatches) {
    matches = move(newMatches);
    for (Match* match : matches) {
        match->getPlayer1();
        match->getPlayer2();
    }
}

// play the next round of matches
void Bracket::playNextRound() {
    vector<Match*> nextRound = getRemainingMatches();
    if (nextRound.empty()) {
        cout << "No more matches to play in the bracket." << endl;
        return;
    }

    for (Match* match : nextRound) {
        match->playMatch();
    }
}

// get bracket summary
string Bracket::getBracketSummary() const {
    stringstream ss;
    ss << (isWinnerBracket ? "Winner's Bracket" : "Loser's Bracket") << endl;

    for (Match* match : matches) {
        ss << (match->getWinner() ? match->getMatchSummary() : "Match has not been played yet.") << endl;
    }

    return ss.str();
}

// reset bracket for new tournament
void Bracket::resetBracket() {
    for (Match* match : matches) {
        match->getPlayer1()->reset();
        match->getPlayer2()->reset();
    }
}
