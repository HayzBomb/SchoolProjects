/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 12
***********************/

#include <fstream>
#include "FilmStats.h"

bool FilmStats::processFile(string file) {
  ifstream fin;
  fin.open (file);
  if (!fin){
    fin.close();
    return false;
  }
  else {

    for(int i = 0; i < NUM_FILES; i++){
      Film Object;
      getline(fin, Object.title, '#');
      fin >> Object.worldWideGross;
      fin >> Object.releaseYear;
      stats[i] = Object;


    }

    fin.close();
    return true;

  }

}

Film FilmStats::getFilmByRank(int rank){
  Film name;
  rank--;
  if(rank < 0 || rank > NUM_FILES){
    name.title = "Invalid";
    name.worldWideGross = 0.0;
    name.releaseYear = 0;
  }
  else{
    name = stats[rank];
  }

  return name;
}

double FilmStats::getTotalOfFilms(int startRank, int endRank) {
  double total;
  Film name;

  if (startRank < 1){
    startRank = 0;
  }
  else {
    startRank--;
  }
  if (endRank > 50){
    endRank = 49;
  }
  else {
    endRank--;
  }


  for (int x = startRank; x <= endRank; x++){
    name = stats[x];
    total += name.worldWideGross;
  }
  return total;
}

double FilmStats::getAverageOfFilms(int startRank, int endRank) {
  double total;
  int amount;
  double average;
  Film name;

  if (startRank < 1){
    startRank = 0;
  }
  else {
    startRank--;
  }
  if (endRank > 50){
    endRank = 49;
  }
  else {
    endRank--;
  }

  for (int x = startRank; x <= endRank; x++){
    name = stats[x];
    total += name.worldWideGross;

  }
  amount = endRank - startRank;
  amount++;


  average = total/amount;

  return average;
}