/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 8
***********************/

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>


using namespace std;

struct Color
{
  int red;
  int green;
  int blue;
};

void smoosh(int rows, int cols, Color leftColor, Color rightColor, string filename);



int main()
{
  int rows;
  int cols;
  Color leftColor;
  Color rightColor;
  string filename;

  // TODO: Add your code here to get user input

  cout << "Left Color: ";
  cin >> leftColor.red;
  cin >> leftColor.green;
  cin >> leftColor.blue;
  cout << "Right Color: ";
  cin >> rightColor.red;
  cin >> rightColor.green;
  cin >> rightColor.blue;
  cout << "Height: ";
  cin >> rows;
  cout << "Width: ";
  cin >> cols;
  cout << "File Name: ";
  cin >> filename;

  smoosh(rows, cols, leftColor, rightColor, filename);



  return 0;
}

void smoosh(int rows, int cols, Color leftColor, Color rightColor, string filename) {
  float redRate;
  float greenRate;
  float blueRate;


  ofstream writer;
  writer.open(filename);
  writer << "P3\r\n";
  writer << cols << " " << rows << "\r\n";
  writer << "255\r\n";

  redRate = (rightColor.red - leftColor.red) / float(cols);
  greenRate = (rightColor.green - leftColor.green) / float(cols);
  blueRate = (rightColor.blue - leftColor.blue) / float(cols);


  for (int t = 1; t <= rows; t++) {
    float redSum = leftColor.red;
    float greenSum = leftColor.green;
    float blueSum = leftColor.blue;

    for (int i = 1; i <= cols; i++) {

      //round() if we want to actually be right
      if (redSum < 100) {
        writer << " ";
      }
      if (redSum < 10) {
        writer << " ";
      }
      writer << round(redSum) << " ";

      if (greenSum < 100) {
        writer << " ";
      }
      if (greenSum < 10) {
        writer << " ";
      }
      writer << round(greenSum) << " ";

      if (blueSum < 100) {
        writer << " ";
      }
      if (blueSum < 10) {
        writer << " ";
      }
      writer << round(blueSum);
      writer << "   ";

      redSum += redRate;
      greenSum += greenRate;
      blueSum += blueRate;
    }
    writer << "\r\n";
    // TODO: Complete this function
  }
  writer.close();
}



