#include <stdio.h>
#include <string.h>
/*
* While loops
*/
int lessonTwo(void){

  char myChar = 'a';
  while(myChar != 'q'){
    myChar += 1;
  }
  printf("%c\n", myChar);

  return 0;
}

/**
* For loops
* Use for loops when # of iterations is computable before entering loop
*/
int lessonFive(void){

  int i;
  for(i = 0; i<10; i++){
    printf("%d\n", i);
  }

  return 0;
}

/*
* Can use break and continues to modify your loop
* Breaks will exit the loop
* Continues will bring the program back to the Loop evaluation line
*
*/
int lessonEight(void){

  int i = 1;
  int j = 2;
  while(i<=10){
    if((i%j) == 0){
      break;
    }
    i++;

  }

  printf("I  is: %d\n", i);

  return 0;
}

/*
* Loop + Break exercise
*/
int exerciseEight(void) {
   char simonPattern[50] = "";
   char userPattern[50] = "";
   int userScore = 0;
   int i = 0;

   userScore = 0;
   strcpy(simonPattern, "RRGBRYYBGY");
   strcpy(userPattern, "RRGBBRYBGY");

   /* Your solution goes here  */
   for(i = 0; i< strlen(simonPattern); i++){
      if(simonPattern[i] == userPattern[i]){
         userScore ++;
      }else{
         break;
      }
   }

   printf("userScore: %d\n", userScore);

   return 0;
}

/*
* Enumerations
* Enumerations define a new type that can be used like ints, chars, etc
* Enumerations assign an int value to each enumeration 
*/
int lessonNine(void){

  enum BoolFoo {foo, bar}; // enums are assigned int values
  enum BoolFoo myBool= bar;
  printf("%d\n", myBool);

  return 0;
}

int main(void){
  // lessonTwo();
  // lessonFive();
  // lessonEight();
  lessonNine();
  // exerciseEight();
  return 0;
}
