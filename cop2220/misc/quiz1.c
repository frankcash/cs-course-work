#include <stdio.h>

// question 12
// printf("%.3lf ", x); will output the value of x with a precision of 3 decimal digits, as long as x is double

int main(void){
  float f = 3.3333;
  double g = 3.3333;
  printf("%.3lf\n", f);
  printf("%.3lf\n", g);
  unsigned int h = 2147483647;
  unsigned int j = 4294967295;
  printf("%d\n", h);
  printf("%d\n", j);

}
