/**
*	 Name: Charles Cash
* Date: November 13, 2016
* Class: COP 2220
* Assignment: Rounding Numbers
* Compiled with GCC on OSX
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
* Rounds a number to an integer
*/
void roundToInteger(double num){
	double* rounded = (double*) malloc(sizeof(double));
	*rounded = floor(num + 0.5);
	printf("The rounded number is: %f\n", *rounded);
	return;
}

/**
* Rounds a number to the tens place
*/
void roundToTenths(double num){
	double* rounded = (double*) malloc(sizeof(double));
	*rounded = floor((num/10)  + 0.5) * 10;
	printf("The rounded number is: %f\n", *rounded);
	return;
}

/**
* Rounds a number to the hundreds place
*/
void roundToHundredths(double num){
	double* rounded = (double*) malloc(sizeof(double));
	*rounded = floor((num/100) + 0.5) * 100;
	printf("The rounded number is: %f\n", *rounded);
	return;
}

/**
* Rounds a number to the thousands place
*/
void roundToThousands(double num){
	double* rounded = (double*) malloc(sizeof(double));
	*rounded = floor((num/1000) + 0.5)  * 1000;
	printf("The rounded number is: %f\n", *rounded);
	return;
}

/**
* Main program loop
* Creates initial memory -> Gets initial user input -> Does initial computationChosen
* Reallocs mem -> Loops through doing computations until user elects to exit
*/
int main(void){

	double* inputVal;
	int* computationChosen;
	inputVal = (double*) malloc(sizeof(double));
	computationChosen = (int*) malloc(sizeof(int));
	printf("Please enter a value: \n");
	scanf("%lf", inputVal);
	printf("Please enter which rounding operation you wish to do:\n");
	printf("1: Integer; 2: Tens; 3: Hundreds; 4: Thousands; 0: Exit\n");
	scanf("%d", computationChosen);

	printf("Original Value: %f\n", *inputVal);

	switch(*computationChosen){
		case 0:
			break;
		case 1:
			roundToInteger(*inputVal);
			break;
		case 2:
			roundToTenths(*inputVal);
			break;
		case 3:
			roundToHundredths(*inputVal);
			break;
		case 4:
			roundToThousands(*inputVal);
			break;
	}
	if(*computationChosen != 0){
		computationChosen = (int*) realloc(computationChosen, sizeof(int));
		printf("Please enter which rounding operation you wish to do:\n");
		printf("1: Integer; 2: Tens; 3: Hundreds; 4: Thousands; 0: Exit\n");
		scanf(" %d", computationChosen);
		while( *computationChosen != 0){
			inputVal = (double*) realloc(inputVal, sizeof(int));
			printf("Please enter a value: \n");
			scanf("%lf", inputVal);
			printf("Original Value: %f\n", *inputVal);
			switch(*computationChosen){
				case 0:
					break;
				case 1:
					roundToInteger(*inputVal);
					break;
				case 2:
					roundToTenths(*inputVal);
					break;
				case 3:
					roundToHundredths(*inputVal);
					break;
				case 4:
					roundToThousands(*inputVal);
					break;
			}
			printf("Please enter which rounding operation you wish to do:\n");
			printf("1: Integer; 2: Tens; 3: Hundreds; 4: Thousands; 0: Exit\n");
			scanf("%d", computationChosen);
		}
	}

	// Frees up memory
	free(inputVal);
	free(computationChosen);
	return 0;
}
