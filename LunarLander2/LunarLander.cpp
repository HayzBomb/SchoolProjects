/************************
* A#: A01684852
* Course: CS1400
* CS1400 Section: 1
* CS1405 Section: 10
* HW#: 11
***********************/


#include <iostream>
#include <math.h>
#define pi 3.14159
#include "LunarLander.hpp"

Vect operator+(Vect a, Vect b){
  Vect c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  return c;
}
//constructors
Lander::Lander(Vect iG, double iangle, Vect ivelocity, double ifuel, Vect iposition, double imax, bool icrashed, bool ilanded) : gravity(iG), angle(iangle), velocity (ivelocity), fuel(ifuel), position(iposition), crashed(icrashed), landed(ilanded)
{
  thrust.x = 0.0;
  thrust.y = 0.0;

}

Vect Lander::getVelocity(){
  return velocity;
}
double Lander::getFuel(){
  return fuel;
}
Vect Lander::getPosition(){
  return position;
}
double Lander::getMTS(){
  return maxTouchdownSpeed;
}
bool Lander::getCrashed(){
  return crashed;
}
bool Lander::getLanded(){
  return landed;
}
double Lander::getAngle(){
  return angle;
}
//controls
void Lander::rotateLeft(double rotateAngle){



  if(rotateAngle < 0){
    rotateAngle *= -1;
  }
  if(rotateAngle > pi/12){
    rotatedThisTurn = pi/12;
  }
  else{
    rotatedThisTurn += rotateAngle;
  }

}
// max rotation per sec is pi/12
// rotateAngle should be a
// positive number.  This function
// affects only the variable
// rotatedThisTurn.

void Lander::rotateRight(double rotateAngle){


  if(rotateAngle < 0){
    rotateAngle *= -1;
  }
  if(rotateAngle > pi/12){
    rotatedThisTurn = pi/12;
  }
  else{
    rotatedThisTurn -= rotateAngle;
  }

}
// max rotation per sec is pi/12
// rotateAngle should be a
// positive number.  This function
// affects only the variable
// rotatedThisTurn.

void Lander::burn(double fuelAmount){
  if(fuelAmount < 0){
    fabs(fuelAmount);
  }
  if(fuelAmount > 50){
    fuelAmount = 50;
    fuelBurnedThisTurn = fuelAmount;
  }
  else{
    fuelBurnedThisTurn = fuelAmount;
  }

}
// max fuelBurn per sec is 50;
// fuelAmount should be a
// positive number.  This function
// affects only the variable
// fuelBurnedThisTurn

void Lander::timeUpdate(){
  if(crashed){
    return;
  }
  if(landed){
    return;
  }
  if (angle < 0) {
    angle *= -1;
  }
  angle += rotatedThisTurn;
  
  if (fuelBurnedThisTurn > fuel) {
    fuelBurnedThisTurn = fuel;
  }
  fuel -= fuelBurnedThisTurn;

  thrust.x = cos(angle)*fuelBurnedThisTurn;
  thrust.y = sin(angle)*fuelBurnedThisTurn;

  velocity = velocity + thrust + gravity;
  position = position + velocity;

  rotatedThisTurn = 0.0;

  fuelBurnedThisTurn = 0.0;

/*  if(position.y <= 0 && maxTouchdownSpeed > velocity.y && angle == (pi/2)){
    crashed = true;
  }
  if(position.y <= 0 && maxTouchdownSpeed <= velocity.y){
    landed = true;
  }*/
  if ((position.y) < 0){
    if ((velocity.x)*(velocity.x) && (velocity.y)*(velocity.y*maxTouchdownSpeed) || angle != pi/2 ){
      crashed = true;
    }
    else{
      landed = true;
    }
    if (crashed || landed){
      velocity.x = 0;
      velocity.y = 0;
      position.y = 0;
    }
  }

};
// this function uses
// rotatedThisturn and
// fuelBurnedThisTurn to simulate
// the passage of 1 second of
// time. this vunction updates
// angle, thrust, velocity,
// position, fuel, crashed, and
// landed.  it also resets
// rotatedThisTurn and
// fuelBurnedThisTurn


