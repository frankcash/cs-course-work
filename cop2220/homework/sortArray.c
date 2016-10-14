/**
* Name: Charles Cash
* Date: October 14, 2016
* Class: COP 2220
* Assignment: Sorting and Displaying an Array
*/

#include <stdio.h>

void sortArray(double* array, int size);
void displayArray(double* array, int size);
void inputData(double* array);


/**
* Declare an array and passes it into an input, sort, and display function
*/
int main(void){
  int arraySize = 6;
  double userArr[arraySize];
  char userInput = 'y';

  while(userInput == 'y'){
    inputData(userArr);
    sortArray(userArr, arraySize);
    displayArray(userArr, arraySize);
    printf("Would you like to do another calculation? (y/n)\n");
    scanf(" %c", &userInput);
  }

  return 0;
}


/**
* Takes in an array and the array's size
* Sorts the array with buble sort
*/
void sortArray(double* array, int size){

  int i, swapping = 1;
  double temp = 0.0;
  while(swapping){  // while swapping is occuring
    swapping = 0;
    for(i = 1; i < size; i++){  // loop through numbers falling ahead
      if(array[i] < array[i -1]){  // check if previous numb is lesser than current
        temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
        swapping = 1;
      }
    }
  }
  return;
}


/**
* Takes in an array and displays it
*/
void displayArray(double* array, int size){
  int i = 0;
  printf("The sorted array is: ");
  for(i = 0; i < size; i++){
    printf("%f ",  array[i]);
  }
  printf("\n");
}

/**
* Gets user input for the array
*/
void inputData(double* array){
  printf("Please enter six numbers for the array:\n");
  scanf("%lf", &array[0]);
  scanf("%lf", &array[1]);
  scanf("%lf", &array[2]);
  scanf("%lf", &array[3]);
  scanf("%lf", &array[4]);
  scanf("%lf", &array[5]);
}
