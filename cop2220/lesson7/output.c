#include <stdio.h>
#include "FooStruct.h"

typedef struct MyGlobal_struct{
  int foobar;
}MyGlobal;

/**
* Structs are variables with subitems
* Each struct subitem is called a data member
*/
int lessonOne(void){
  typedef struct foobar_struct{
    int fizz;
    int buzz;
  } foobar;

  foobar foo;
  foo.fizz = 5;

  printf("%d\n", foo.fizz);

  return 0;
}

/**
* Functions can both return and take in structs
*/
MyGlobal lessonTwo(MyGlobal myGlobal){
  myGlobal.foobar = 42;
  return myGlobal;
}

/**
* It is possible to make an array of structs
*/
int lessonThree(void){
  MyGlobal array[4];
  return 0;
}

/**
* Structs are commonly defined in a .h file
*/
int lessonFive(void){
  Foo fizzbuzz;
  fizzbuzz.foo = 4;
  fizzbuzz.bar = 'c';
  FooDoubleFoo(&fizzbuzz);

  printf("%d\n", fizzbuzz.foo);

  return 0;
}

int main(void){
  MyGlobal foo;
  // lessonOne();
  lessonTwo(foo);
  lessonFive();
  return 0;
}
