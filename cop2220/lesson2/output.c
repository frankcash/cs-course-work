#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

/**
* Defining Variables
*/
int lessonOne(void){
    int numPeople; // creates a variable without initializing it
    int numDogs = 4 ; //  creates a variable and initializes it
    int foo, bar, fizz, buzz; // can define multiple vars at once

    return 0;
}

/**
* Assignment
*/
int lessonTwo(void){
  int foo;
  int bar = 4;
  foo = bar * 2;
  printf("foo is: %i\n", foo);

  return 0;
}

/**
* Identifiers
*/
int lessonThree(void){
  printf("Identifiers cannot start with numbers\n");
  printf("They also cannot contain spaces\n");
  return 0;
}

/**
* doubles (Floating point numbers)
*/
int lessonFive(void){

  double foo = 0.5; // best to have the leading 0
  printf(" we use lf to print doubles %lf\n", foo);
  return 0;
}

int lessonSix(void){
  const int FOO = 00012; // use const keyword to declare a const
  return 0;
}

int lessonSeven(void){
  sqrt(16);  // performs square root
  pow(4, 2);  // performs 4 to the power of 2
  return 0;
}

int lessonEight(void){
  int foo = 2;
  int bar = 3;
  double res;
  res = (double) foo / (double) bar; //does casting


  return 0;
}

/**
* Working with Chars
*/
int lessonNine(void){
  char letterStart = 'c';
  printf("Enter a char letter:\n"); // %c is the format specifier for chars
  scanf("%c", &letterStart);

  printf("you entered: %c\n the next letter is: %c\n", letterStart, letterStart+1); // chars are stored ASCII in C

  return 0;
}

/**
* Strings (char arrays);
* Strings in c are always terminated with null char '\0', thus arrays in C should
* be 1 unit longer than the string needed
*/
int lessonTen(void){
  char foo[50] = "";
  char bar[50] = "";
  printf("Enter a char array:\n");
  scanf("%s", foo); // %s is string format specifier, don't need & because the array is basically a pointer
  printf("String is: %s\n", foo);
  strcpy(bar, foo); // In c you can not assign one string to another, must use strcpy from string.h
  printf("Bar is: %s\n", bar);
  return 0;
}

int main(void){
  // lessonTwo();
  lessonNine();
  lessonTen();
  return 0;

}
