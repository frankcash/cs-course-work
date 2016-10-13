#include <stdio.h>
#include <stdbool.h>


void sortArray(double array[], int size);
void displayArray(double* array, int size);

int main(void){
  double myArray[5] = {1.1, 2.1, 0.0, 3.3, 4.4};

  displayArray(myArray, 5);
  sortArray(myArray, 5);
  displayArray(myArray, 5);
  return 0;
}


void sortArray(double array[], int size){

  int i, temp, s = 1;
  // while swapping is occuring
  while(s){
    s = 0;
    for(i = 1; i < size; i++){ // loop through numbers falling ahead
      if(array[i] < array[i -1]){  // check if previous numb is lesser than current
        temp = array[i];
        array[i] = array[i - 1];
        array[i - 1] = temp;
        s = 1;
      }
    }
  }
  return;
}


void displayArray(double* array, int size){
  int i = 0;
  printf("The array is: \n");
  for(i = 0; i < size; i++){
    printf("%f ",  array[i]);
  }
}
