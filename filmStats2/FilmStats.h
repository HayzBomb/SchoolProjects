/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 12
***********************/

#ifndef FILMSTATS_FILMSTATS_H
#define FILMSTATS_FILMSTATS_H

#include <iostream>
#include <string>

using namespace std;

struct Film {
  string title;
  double worldWideGross;
  int releaseYear;
};

class FilmStats {
public:
  bool processFile(string file);
  Film getFilmByRank(int rank);
  double getTotalOfFilms(int startRank, int endRank);
  double getAverageOfFilms(int startRank, int endRank);

private:
    static const int NUM_FILES = 50;
    Film stats[NUM_FILES]; //Array
};
#endif //FILMSTATS_FILMSTATS_H
