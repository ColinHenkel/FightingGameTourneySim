# Generated via Github Copilot because I am lazy

# Variables
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17
SRC = src/
INCLUDE = include/

# Object files
OBJS = $(SRC)main.o $(SRC)Tournament.o $(SRC)Player.o $(SRC)Match.o $(SRC)Bracket.o $(SRC)MatchHistory.o

# Executable
TARGET = tournament_simulator

# Build rules
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

$(SRC)%.o: $(SRC)%.cpp $(INCLUDE)%.h
	$(CXX) $(CXXFLAGS) -I$(INCLUDE) -c $< -o $@

clean:
	rm -f $(SRC)*.o $(TARGET)
