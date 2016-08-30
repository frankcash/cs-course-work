#include <stdio.h>

/**
* Prints out ints
*/
int lessonOne(void){
  int foo = 20;
  printf("keep calm");
  printf("and\n");
  printf("carry on\n"); /* customary to end with \n */
  printf("%d\n", foo); /* prints the var foo */
  printf("You are %d years. %d is young", foo, foo); // need

  return 0;
}

/**
* Read in and print out ints
*/
int lessonTwo(void){
  int hourlyWage = 0;
  int annualSalary = 0;
  int foo = 0;
  int bar = 0;

  printf("Enter wage:\n");
  scanf("%d", &hourlyWage); // Read user input into hourlyWage

  annualSalary = hourlyWage * 40 * 50;
  printf("Salary is %d\n", annualSalary);
  printf("Enter two values: \n");
  scanf("%d %d", &foo, &bar); // multi input
  printf("%d/%d", foo, bar);

  return 0;
}

/**
* How to do comments in C
*/
int lessonThree(void){
  /* this is a valid comment */
  // this is also a valid comment
  printf("comments");

  return 0;
}

/**
* Primer on errors
*/
int lessonFour(void){
  printf("Errors detected by the compiler are compile-time errors\n");
  printf("Logic Errors (runtime errors) are bugs detected at run time\n");
  printf("Compilers sometimes report a warning, which doesn't stop the compiler, but does indicate a possible error\n");

  return 0;
}

/**
* Read in Strings and print out strings
*/
int lessonSix(void){
  char firstName[50] = ""; // Creates an array of chars

  printf("What is the person's first name?\n");
  scanf("%s", firstName);
  printf("First name is: %s\n", firstName);

  return 0;
}


int main(void){
  // lessonOne();
  // lessonTwo();
  // lessonFour();
  lessonSix();
  return 0;
}
