#include <stdio.h>
#include <assert.h>
#include <string.h>

// https://msdn.microsoft.com/en-us/library/bz4heb45.aspx - function definition
// https://msdn.microsoft.com/en-us/library/697bs375.aspx - function call

int lessonFour(void){
  printf("using functions improve program readability\n");
  printf("functions allow modular program development\n");
  printf("functions allow us to avoid writing redundant code\n");

  return 0;
}

/**
* The assert lib can be used for unit testing in C
*/
int lessonSix(void){
  return 6;
}

int lessonSeven(void){
  printf("Each function call creates a new set of local vars\n");
  printf("This is what is known as a stack frame\n");

  return 0;
}

/**
* Doubles x and y, then totals them
*/
int exampleLessonEight(int* x, int* y){
  *x = *x * 2;
  *y = *y * 2;
  int total = *x + *y;
  return total;
}

/**
* In a case where we might want to return the modified values, it is beneficial
* to pass by pointer
*/
int lessonEight(void){
  int x = 2;
  int y = 4;
  exampleLessonEight(&x, &y);

  printf("x: %d\ny: %d\n", x, y);

  return 0;
}


// loops through and prints an array
int exampleLessonNine(int myArray[], const int numVal){
  int i = 0;
  printf("My array: ");
  for(i = 0; i < numVal; i++){
    printf("%d", myArray[i]);
  }
  printf("\n");

  return 0;
}

/**
* Functions with array parameters
*/
int lessonNine(void){
  int numVal = 4;
  int foo[4] = {0, 1, 2, 3};

  exampleLessonNine(foo, numVal);
  return 0;
}

/**
* As with normal arrays, declaration could take a pointer as well
*/
void StrSpaceToHyphen(char* modString){
  int i = 0;
  for(i = 0; i< strlen(modString); i++){
    if(modString[i] == ' '){
      modString[i] = '-';
    }
  }

  return;
}

// example function Declaration AKA function prototype
int myDeclaration(int foo, int bar);

/**
* Strings are automatically passed by pointer
*/
int lessonEleven(void){
  const int INPUT_STR_SIZE = 50;
  char userStr[50];

  printf("Enter a string with spaces: \n");
  fgets(userStr, INPUT_STR_SIZE, stdin);

  StrSpaceToHyphen(userStr);

  printf("String with hypens: %s\n", userStr);

}

int main(void){
  // assert(lessonSix() == 6);
  // lessonEight();
  // lessonNine();
  lessonEleven();
  return 0;
}

// example function definition
int myDeclaration(int foo, int bar){
  printf("foo: %d\nbar: %d\n", foo, bar);
}
