#include <stdio.h>

/**
* sample function that takes in pointers
* From: K&R Page 85
*/
void swap(int *a, int *b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
  return;
}

int main(void){

  int x = 1, y = 2, z[10];
  int *ip, *yp; /* ip is a pointer to int */
  ip = &x; /* ip now points to x */
  yp = &y;
  y = *ip; /* y is now 1*/
  *ip = 0; /*x is now 0 */
  // ip = &z[0]; /*ip now points to z[0] */
  *ip = *ip + 10;

  printf("the value of x: %d\nthe value of y: %d\nthe value of ip: %d\n the value of yp: %d\n", x, y, *ip, *yp);
  swap(ip, yp);
  printf("the value of x: %d\nthe value of y: %d\nthe value of ip: %d\n the value of yp: %d\n", x, y, *ip, *yp);

  /* Messing w/ pointers and arrays */
  int *o, f;
  int pa[10];
  o = &pa[0]; // assigns beginning of array to pointer
  pa[3] = 4;
  f = *(o+3);
  printf("the value of pa[3]: %d\n", f); // should be 4

  return 0;
}
