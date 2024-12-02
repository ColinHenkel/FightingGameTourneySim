#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    int id; // unique id for each player
    std::string name; // name of player
    bool inWinners; // track if player is in winners bracket
    bool eliminated; // track if player is eliminated from tournament

public:
    // constructor
    Player(int id, const std::string& name);

    // getters
    int getId() const;
    std::string getName() const;
    bool isInWinners() const;
    bool isEliminated() const;

    // setters
    void markEliminated();
    void sendToLosers();

    // util
    void reset();

    // string representation
    std::string toString() const;
};

#endif // PLAYER_H
