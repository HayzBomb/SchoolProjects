#include <iostream>

#include "GameOfLife.h"

GameOfLife::GameOfLife(void)
{
  population = 0;
  generations = 0;

  for (int row = 0; row < ROWS; row++)
  {
    for (int col = 0; col < COLS; col++)
    {
      current[row][col] = false;
      next[row][col] = false;
    }
  }
}

void GameOfLife::draw(void)
{
  for (int row = 0; row < ROWS; row++)
  {
    for (int col = 0; col < COLS; col++)
    {
      if (current[row][col])
      {
        cout << '*';
      }
      else
      {
        cout << ' ';
      }
    }

    cout << endl;
  }

  cout << "Generations: " << generations << " Population: " << population << endl;
  cout << "=~=" << endl;

  updateNext();
  copyFromNextIntoCurrent();
  generations++;
}
