/**
* Name: Charles Cash
* Date: September 28, 2016
* Class: COP 2220
* Assignment: Circle, Square, Triangle, and Rectangle
*/

#include <stdio.h>
#include <math.h>

/**
* Prints the initial output to direct the user
*/
int initOutput(void){
  printf("This program will compute the area and perimeter of the selected geometric figure.\n");
  printf("Please enter 0 for Circle.\n");
  printf("Please enter 1 for Square.\n");
  printf("Please enter 2 for Triangle.\n");
  printf("Please enter 3 for Rectangle.\n");

  return 0;
}

/**
* Gets user input and then computes perimeter and area
* Requires user input of radius
*/
int computeCircle(void){
  double radius = 0.0 ;
  double perim = 0.0;
  double area = 0.0;
  const double PI = 3.14159;
  printf("Please enter the radius of the circle\n");
  scanf("%lf", &radius);
  // 2pi * r;
  perim = 2 * PI * radius; // TODO: put in proper value of pi
  area = PI * (pow(radius, 2)); // TODO: put in proper value of pi

  printf("The perimeter is: %lf.\nThe area is: %lf.\n", perim, area);
  return 0;
}

/**
* Gets user input and then computes perimeter and area
* Requires user input of one side
*/
int computeSquare(void){
  double side = 0.0;
  double perim = 0.0;
  double area = 0.0;
  printf("Please enter a side of the square\n");
  scanf("%lf", &side);

  perim = 4 * side;
  area = (pow(side, 2));

  printf("The perimeter is: %lf.\nThe area is: %lf.\n", perim, area);
  return 0;
}

/**
* Gets user input and then computes perimeter and area
* Requires user input of base and height and it's other two sides
*/
int computeTriangle(void){
  double perim = 0.0;
  double area = 0.0;
  double base = 0.0;
  double width = 0.0;
  double sideA = 0.0;
  double sideB = 0.0;

  printf("Please enter the base of the triangle\n");
  scanf("%lf", &base);
  printf("Please enter the width of the triangle\n");
  scanf("%lf", &width);
  printf("Please enter one of the remaining sides of the triangle\n");
  scanf("%lf", &sideA);
  printf("Please enter the remaining side of the triangle\n");
  scanf("%lf", &sideB);

  perim = sideA + sideB + width;
  area = 0.5 * (base * width);

  printf("The perimeter is: %lf.\nThe area is: %lf.\n", perim, area);

  return 0;
}

/**
* Gets user input and then computes perimeter and area
* Requires user input of length and width
*/
int computeRectangle(void){
  double length = 0.0;
  double width = 0.0;
  double perim = 0.0;
  double area = 0.0;

  printf("Please enter the length of the rectangle\n");
  scanf("%lf", &length);
  printf("Please enter the width of the rectangle\n");
  scanf("%lf", &width);

  perim = 2.0 * (length + width);
  area = length * width;

  printf("The perimeter is: %lf.\nThe area is: %lf.\n", perim, area);

  return 0;
}


int main(void){
  initOutput();

  char userInput = ' ';
  scanf("%c", &userInput);

  switch(userInput){
    case '0':
      computeCircle();
      break;
    case '1':
      computeSquare();
      break;
    case '2':
      computeTriangle();
      break;
    case '3':
      computeRectangle();
      break;
    default:
      printf("unexpected user input\n");
      break;
  }

  return 0;
}
