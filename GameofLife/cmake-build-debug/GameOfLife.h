#ifndef _GAME_OF_LIFE_H
#define _GAME_OF_LIFE_H

#include <string>

using namespace std;

// Class used to simulate Conway's Game of Life
class GameOfLife
{
  public:
    // Class constants
    enum
    {
      ROWS = 25,
      COLS = 50
    };

    // Default constructor, initialize your member variables!
    GameOfLife(void);

    // *** TO IMPLEMENT *** Sets the initial state of the game of life
    void initFromFile(string fileName);

    // Draw the current state and the run a generation
    void draw(void);

  private:
    // *** TO IMPLEMENT *** Count how many alive neighbors a cell has
    int countNeighbors(int row, int col);

    // *** TO IMPLEMENT *** Update the game of life based on rules from assignment description
    void updateNext(void);

    // *** TO IMPLEMENT *** Copy the contents of next[][] into current[][]
    void copyFromNextIntoCurrent(void);

    bool current[ROWS][COLS];  // Current state of the game of life
    bool next[ROWS][COLS];     // The updated next state
    int generations;           // Number of generations
    int population;            // Current game of life population
};

#endif // _GAME_OF_LIFE_H

