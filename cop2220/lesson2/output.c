#include <stdio.h>

/**
* Defining Variables
*/
int lessonOne(void){
    int numPeople; // creates a variable without initializing it
    int numDogs = 4 ; //  creates a variable and initializes it
    int foo, bar, fizz, buzz; // can define multiple vars at once
}

/**
* Assignment
*/
int lessonTwo(void){
  int foo;
  int bar = 4;
  foo = bar * 2;
  printf("foo is: %i\n", foo);
}

int main(void){
  lessonTwo();
  return 0;

}
