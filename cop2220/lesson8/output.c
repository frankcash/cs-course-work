#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* Pointers are pass by reference
* Pointers are variables that contain a memory reference
*/
void lessonOne(char f, char* d){
  *d = 'd';
  return;
}

/**
* prepending & to any variable gets the variable's memory address
* appending * after a data type   defines a pointer variable
* prepending * to a pointer vairables in an expression gets the data to which it points
*
*/
void lessonTwo(void){
  int x = 3;
  int* y;
  y = &x; // gives the pointer the mem address of x

  *y = x + 3; // will do addition to X

  printf("x: %d\n", x);
  printf("y: %d\n", *y);
  printf("y mem address: %p\n", (void *) y); // prints the mem address of x

  return;
}

void lessonThree(void){
  int* myPtr = NULL;
  printf("myPtr: %p\n", (void*) myPtr);

  // sizeof() returns number of bytes for type
  // malloc() allocates specified number of bytes
  // cast void pointer to the desired type
  myPtr = (int*) malloc(sizeof(int));
  printf("myPtr: %p\n", (void*) myPtr);
  printf("myPtr: %d\n", *myPtr);

  *myPtr = 555;
  printf("*myPtr: %d\n", *myPtr);
  free(myPtr); // deallocates the memory
  return;
}

typedef struct myItem_struct{
  int num1;
  int num2;
} myItem;

void myItem_PrintNums(myItem* itemPtr){
  if(itemPtr == NULL) return;

  printf("num 1: %d\n", itemPtr->num1);
  printf("num 2: %d\n", itemPtr->num2);

  return;
}


/**
* Malloc and structs can be used together in a powerfull manner
*/
void lessonFour(void){
  myItem* myItemPtr1;
  myItemPtr1 = (myItem*)malloc(sizeof(myItem)); // malloc is commonly used to allocate proper memory for structs
  myItemPtr1->num1 = 5; // member access operator form
  (*myItemPtr1).num2 = 10; // acceubg a struct's member is possible by dereferencing the pointer

  myItem_PrintNums(myItemPtr1);
  free(myItemPtr1);
  return;
}

/**
* Some nice string functions use pointers
*/
void lessonFive(void){
  char string1[10] = "abcxyz";
  char string2[10] = "xyz";
  char newText[10] = "";

  if(strcmp(&string1[3], "xyz") == 0){
    printf("xyz equals xyz");
  }

  char* subStr = NULL;
  subStr = &string1[3]; // pointer now gets the pointer for position of x in string 1
  if(strcmp(subStr, string2) == 0){
    printf("xyz equals xyz");
  }
  return;
}

/**
* One could use malloc to dynamically allocate memory for an array
*/
void lessonSix(void){

  char* myStr = NULL;
  myStr = (char*) malloc(10 * sizeof(char));
  myStr[0] = 'f';
  printf("%c\n", myStr[0]);

  return;
}

/**
* realloc is useful to change an original pointer's block to a newly specified size one
*/
void lessonSeven(void){
  int* f = NULL;

  f = (int*) malloc(10 * sizeof(int));
  f[9] = 10;
  f = realloc(f, (2*sizeof(int)));
  f[1] = 2;
  return;
}

int main(void){
  // char f = 'f';
  // char d = 'f';
  // lessonOne(f, &d);
  // lessonTwo();
  // lessonThree();
  // lessonFour();
  // lessonSix();
  lessonSeven();
  return 0;
}
