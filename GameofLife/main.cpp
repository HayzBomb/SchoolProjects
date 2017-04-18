#include <iostream>
#include <string>

#ifdef WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#include "GameOfLife.h"

using namespace std;

int main()
{
  cout << "Game Input File: ";
  std::string fileName;
  getline(cin, fileName);
  cout << "=~=" << endl;

  GameOfLife game;
  game.initFromFile(fileName);

  const int NUM_GENERATIONS = 100;
  const int DELAY_MILLISECONDS = 250;
  for (int i = 0; i < NUM_GENERATIONS; i++)
  {
    game.draw();

#ifdef JARVIS
    // Do nothing, allow animation viewer to set rate
#elif defined WIN32
    Sleep(DELAY_MILLISECONDS);
#else // Linux, Mac
    usleep(DELAY_MILLISECONDS * 1000);
#endif
  }

  return 0;
}

