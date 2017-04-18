/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 9
***********************/

#include <cmath>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Color
{
  int red;
  int green;
  int blue;
};

struct MandelbrotConfig
{
  int width;
  int height;
  double xComplexMin;
  double xComplexMax;
  double yComplexMin;
  double yComplexMax;
  int maxIterations;
  Color colorOne;
  Color colorTwo;
  string outputFileName;
};

MandelbrotConfig readConfig(string fileName, MandelbrotConfig info);
void drawMandelbrot(MandelbrotConfig info);
Color getPixelColor(MandelbrotConfig info, int iteration);

int main()
{
  MandelbrotConfig info;
  string fileName;
  // Read in config file location from user
  cout << "Mandelbrot Config File: ";
  cin >> fileName;

  // Read config file contents into MandelbrotConfig struct instance
  info = readConfig(fileName, info);

  // Compute and write specified mandelbrot image to PPM file
  drawMandelbrot(info);

  return 0;
}

MandelbrotConfig readConfig(string fileName, MandelbrotConfig info){

  ifstream grab;
  grab.open(fileName);

  grab >> info.width >> info.height;
  grab >> info.xComplexMin >> info.xComplexMax;
  grab >> info.yComplexMin >> info.yComplexMax;
  grab >> info.maxIterations;
  grab >> info.colorOne.red >> info.colorOne.green >> info.colorOne.blue;
  grab >> info.colorTwo.red >> info.colorTwo.green >> info.colorTwo.blue;
  grab >> info.outputFileName;

  grab.close();

  /*cout << info.width << " " << info.height << endl;
  cout << info.xComplexMin << " " << info.xComplexMax << endl;
  cout << info.yComplexMin << " " << info.yComplexMax << endl;
  cout << info.maxIterations << endl;
  cout << info.colorOne.red << " " << info.colorOne.green << " " << info.colorOne.blue << endl;
  cout << info.colorTwo.red << " " << info.colorTwo.green << " " << info.colorTwo.blue << endl;
  cout << info.outputFileName << endl;*/

  return info;
}

void drawMandelbrot(MandelbrotConfig info){

  int iteration;
  double x;
  double y;
  double x0;
  double y0;
  double xtemp;
  double pixelWidth;
  double pixelHeight;
  double xComplexDiff;
  double yComplexDiff;

  Color pixelColor;

  xComplexDiff = info.xComplexMax - info.xComplexMin;
  yComplexDiff = info.yComplexMax - info.yComplexMin;

  pixelWidth = xComplexDiff / info.width;
  pixelHeight = yComplexDiff / info.height;

  ofstream push;
  push.open(info.outputFileName);
  push << "P3\r\n";
  push << info.width << " " << info.height << "\r\n";
  push << "255\r\n";

  for(int i = 0; i < info.height; i++){

    for(int p = 0; p < info.width; p++){
      x0 = info.xComplexMin + p * pixelWidth;
      y0 = info.yComplexMin + i * pixelHeight;

      x = 0.0;
      y = 0.0;
      iteration = 0;

      while(x*x + y*y < 2*2 && iteration < info.maxIterations){

        xtemp = x*x - y * y + x0;
        y = 2*x*y + y0;
        x = xtemp;

        iteration++;

        /*cout << iteration << endl;*/

      }

      pixelColor = getPixelColor(info, iteration);


      push << pixelColor.red << setw(4) << pixelColor.green << setw(4) << pixelColor.blue << setw(6);
    }
    push << "\r\n";
  }
  push.close();
}
Color getPixelColor(MandelbrotConfig info, int iteration){

  double rateOfChangeRed;
  double rateOfChangeGreen;
  double rateOfChangeBlue;

  Color boop;

  rateOfChangeRed = (info.colorTwo.red - info.colorOne.red) / double(info.maxIterations);
  rateOfChangeGreen = (info.colorTwo.green - info.colorOne.green) / double(info.maxIterations);
  rateOfChangeBlue = (info.colorTwo.blue - info.colorOne.blue) / double(info.maxIterations);

  /*cout << iteration << endl;
  cout << rateOfChangeRed << " " << rateOfChangeGreen << " " << rateOfChangeBlue << endl << endl;*/

  boop.red = info.colorOne.red + (rateOfChangeRed * iteration);
  boop.green = info.colorOne.green + (rateOfChangeGreen * iteration);
  boop.blue = info.colorOne.blue + (rateOfChangeBlue * iteration);

  /*cout << boop.red << " " << boop.green << " " << boop.blue << endl;*/

  return boop;
}
