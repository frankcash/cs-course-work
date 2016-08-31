#include <stdio.h>

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

}

int main(void){
  lessonTwo();

  return 0;

}
