#include <stdio.h>
#include <stdbool.h> // allows usage of bool data type
#include <string.h> // allows usage of strings
#include <ctype.h> // allows use of char specific functions
#include <math.h> // allows comparisons of floating points

/**
* if else are important
*/
int lessonOne(void){
  if(3 > 2){
    printf("if\n");
  }else{
    printf("else\n");
  }

  return 0;
}

/**
* if else if else
* floats and strings shouldn't use ==
*/
int lessonTwo(void){
  int myVar = 4;

  printf("Shouldn't do float == float\n");

  if(myVar == 5){
    printf("myVar == %d\n", myVar);
  }else if(myVar < 5){
    printf("%d < 5\n", myVar );
  }else{
    printf("no matches\n");
  }

  return 0;
}

/**
* Logical operators in C
*/
int lessonFour(void){
  int a = 1; // true
  int b = 0; // false

  if(a && b){
    printf("a && b\n"); // && is and
  }
  if(a || b){
    printf("a || b\n"); // || is or
  }
  if(!a || !b){
    printf("!a || !b\n"); // ! is logical opposite
  }

  return 0;
}

/**
* Switch statements
*/
int lessonFive(void){
  char userChar = ' ';
  int encodedVal;
  printf("Enter a char:\n");
  scanf("%c", &userChar);

  switch(userChar){
    case 'A':
      encodedVal = 1;
      break;
    case 'B':
      encodedVal = 2;
      break;
    case 'C': // since no break will down to the next situation
    case 'D':
      encodedVal = 4;
      break;
    case 'E':
      encodedVal = 5;
      break;
    case 'F':
      encodedVal = 6;
      break;
    default:
      encodedVal = -1;
      break;
    }

    printf("encodedVal: %d\n", encodedVal);

    return 0;
}

/**
* Boolean data types
*/
int lessonSix(void){
  bool isFalse = false; // defined as 0
  bool isTrue = true; // defined as 1

  return 0;
}

/**
* String comparisons
*/
int lessonSeven(void){
  char userWord[50] ;
  printf("Enter a word: ");
  scanf("%s", userWord);
  if(strcmp(userWord, "Hello") == 0){ // when comparing strings make sure they evaluate to 0
    printf("Strings match");
  }
  return 0;
}

/**
*String access operations
*/
int lessonEight(void){
  char name[4] = "Foo"; // must be long enough to have \0 otherwise won't eval as string
  int len = strlen(name); // gets string length
  return 0;
}

/**
* Character operations
*/
int lessonNine(void){
  isalpha('x'); // true if alphabetical char
  isdigit('6'); // true if numerical char
  isspace(' '); // true if whitespace char
  toupper('f'); // returns uppercase version
  tolower('F'); // returns lowercase version
  return 0;
}

/**
* Floating point comparison
* use an epsilon of value to determine if they are equal
*/
int lessonEleven(void){

  float x = 0.003;
  float y = 0.004;

  printf("%d\n", fabs(x-y)<0.001);

  return 0;
}

int main(void){
  // lessonFour();

  // lessonFive();

  // lessonEight();

  lessonEleven();
  return 0;
}
