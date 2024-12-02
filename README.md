# Fighting Game Tournament Simulator

---

## Project Description

The Fighting Game Tournament Simulator is a C++ program designed to emulate a double-elimination tournament for a fighting game. Participants compete until a final winner is determined, with the double-elimination structure as most fighting game tournaments employ. I chose this project to work on my object-oriented programming skills while providing a robust simulation experience.

---

## Features

- Double-elimination tournament structure.
- Player and match data tracking.
- Dynamic bracket updates after each match.
- Randomized match outcomes or user-defined results.
- Clear distinction between Winner's Bracket and Loser's Bracket.
- Detailed match history for all participants.

---

## Classes and Objects

### 1. `Tournament`

- Manages the overall tournament structure
- Tracks the Winner's and Loser's Brackets
- Handles transitions between brackets
- **Key Methods**:
  - `initializeTournament(vector<Player>)`
  - `runMatch(Match)`
  - `displayBrackets()`

### 2. `Player`

- Represents an individual tournament participant
- **Attributes**:
  - `name` (string): Player's name
  - `id` (int): Unique identifier
  - `eliminated` (bool): Tracks if the player is eliminated
- **Key Methods**:
  - `getName()`
  - `markEliminated()`

### 3. `Match`

- Simulates a match between two players
- **Attributes**:
  - `player1` and `player2` (`Player`): Participants of the match
  - `winner` (`Player`): Winner of the match
  - `loser` (`Player`): Loser of the match
- **Key Methods**:
  - `playMatch()`: Determines the winner and loser
  - `getMatchSummary()`

### 4. `Bracket`

- Organizes matches in a bracket format
- **Attributes**:
  - `matches` (`vector<Match>`): List of matches in the bracket
  - `isWinnersBracket` (bool): Tracks whether it’s the Winner's or Loser's Bracket
- **Key Methods**:
  - `addMatch(Match)`
  - `getRemainingMatches()`
  - `updateBracket(Match)`

---

## How to Use

1. Clone the repository to your local machine.
2. Build the project using your preferred C++ compiler.
3. Run the program with predefined players.
4. Watch the tournament unfold, view the brackets, and track match outcomes.
