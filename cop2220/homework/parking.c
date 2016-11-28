/**
 *	Name: Charles Cash
 * Date: October 26, 2016
 * Class: COP 2220
 * Assignment: Parking Charges
 * Compiled with GCC on Arch Linux
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Struct to store hours and charges
 */
typedef struct parkingCharge_struct{
	double hours;
	double charge;
} parkingCharge;

void populateHours(parkingCharge* carsArrToPopulate, int size); // gets user input for hours
void calculateCharges(parkingCharge* carsArrToPopulate, int size); // takes hours and calculates charges
void printCharges(parkingCharge* carArrsToPrint, int size); // prints tabulated output


/**
 * Runs through initial calculation and then goes into a loop based upon user inputData
 * Designed this way so malloc would run on initial invocation and then use realloc
 */
int main(void){
	int numCars = 0;
	parkingCharge* carsArr = NULL;
	char repeat = 'n';

	printf("Please enter the number of vehicles:\n");
	scanf("%d", &numCars);

	carsArr = (parkingCharge*) malloc(numCars * sizeof(parkingCharge));
	printf("Number of cars %d\n", numCars);
	populateHours(carsArr, numCars);
	calculateCharges(carsArr, numCars);
	printCharges(carsArr, numCars);

	printf("Would you like to do another calculation? (y/n)\n");
	scanf(" %c", &repeat);
	while(repeat == 'y' || repeat == 'Y'){
		printf("Please enter the number of vehicles:\n");
		scanf("%d", &numCars);
		carsArr = (parkingCharge*) realloc(carsArr, (numCars * sizeof(parkingCharge)));
		populateHours(carsArr, numCars);
		calculateCharges(carsArr, numCars);
		printCharges(carsArr, numCars);

		printf("Would you like to do another calculation? (y/n)\n");
		scanf(" %c", &repeat);
	}

	free(carsArr);

	return 0;
}

/**
 * Populates an array of parkingCharges with the amount of hours a car has been parked
 */
void populateHours(parkingCharge* carsArrToPopulate, int size){
	int i = 0;
	double temp = 0.0;
	for(i = 0; i < size; i++){

		printf("Enter hours:\n");
		scanf("%lf", &temp);
		carsArrToPopulate[i].hours = temp;
	}
	return;
}

/*
 * Takes an array of parking charges with amount of hours and populates charge
 */
void calculateCharges(parkingCharge* carsArrToPopulate, int size){
	int i = 0;
	for(i = 0; i < size; i++){

		if(carsArrToPopulate[i].hours <= 3){
			carsArrToPopulate[i].charge = 2.00;
		}else{
			carsArrToPopulate[i].charge =  ((carsArrToPopulate[i].hours - 3) * 0.5) + 2.00;
			if(carsArrToPopulate[i].charge > 10){
				carsArrToPopulate[i].charge = 10.00;
			}
		}
	}

	return;
}

/*
 * Takes an array of parking charges and prints hours and charge in tab output
 */
void printCharges(parkingCharge* carArrsToPrint, int size){
	int i = 0;
	double totalHours = 0.0;
	double totalCharge = 0.0;

	printf("Car\tHours\tCharge\t\n");
	for(i = 0; i < size; i++){
		printf("%d\t%.2lf\t%.2lf\n", (i+1), carArrsToPrint[i].hours, carArrsToPrint[i].charge);
		totalHours += carArrsToPrint[i].hours;
		totalCharge += carArrsToPrint[i].charge;
	}

	printf("Total\t%.1lf\t%.2lf\n", totalHours, totalCharge);

	return;
}
