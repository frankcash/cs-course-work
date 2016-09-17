/**
* Name: Charles Cash
* Date: September 14, 2016
* Class: COP 2220
* Assignment: Table of squares and cubes
*/

#include <math.h>
#include <stdio.h>

/**
* Loops through desired numbers
* in loops applies pow( num, 2) to get cubes and pow(num, 3) to get cubes
*/
int main(void){

  int num, tempSquare, tempCube;
  printf("number\tsquare\tcube\n");

  for(num = 0; num < 11; num++){
    tempSquare = pow(num, 2);
    tempCube = pow(num, 3);
    printf("%d\t%d\t%d\n", num, tempSquare, tempCube);
  }
  return 0;
}
