#include <stdio.h>

float diameter(float r){

  return (2 * r);
}

float circumference(float r){
  float pi = 3.14159;
  return (pi * 2 * r);
}

float area(float r){
  float pi = 3.14159;

  return (pi * r * r);
}

int main(void){

  float radius;

  printf("Please enter radius of the circle: \n");
  scanf("%f", &radius);

  printf("Radius is: %f", radius);

  return 0;
}
