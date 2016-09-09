/**
* Name: Charles Cash
* Date: September 6, 2016
* Class: COP 2220
*/

#include <stdio.h>

/**
* Calculates diameter
*/
float diameter(float r){
  float res = (2 * r);
  return res;
}

/**
* Calculates circumference
*/
float circumference(float r){
  float pi = 3.14159;
  float res = (pi * 2 * r);
  return res;
}

/**
* Calculates area
*/
float area(float r){
  float pi = 3.14159;
  float res =(pi * r * r);
  return res;
}

/**
* Gets user input, runs functions, and then prints output
*/
int main(void){

  float radius, areaVal, circVal, diamVal;

  printf("Please enter radius of the circle: \n");
  scanf("%f", &radius);

  areaVal = area(radius);
  circVal = circumference(radius);
  diamVal = diameter(radius);

  printf("Diameter is: %.2f\n", diamVal);
  printf("Area is: %.2f\n", areaVal);
  printf("Circumference is: %.2f\n", circVal);

  return 0;
}
