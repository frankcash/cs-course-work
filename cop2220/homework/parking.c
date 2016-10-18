#include <stdio.h>
#include <stdlib.h>

typedef struct parkingCharge_struct{
	double hours;
	double charge;
} parkingCharge;

void populateHours(parkingCharge* carsArrToPopulate, int size); // function declaration
void populateCharges(parkingCharge* carsArrToPopulate, int size); // function declaration

int main(void){
	int numCars = 0;
	parkingCharge* carsArr = NULL;

	printf("Please enter the number of vehicles:\n");
	scanf("%d", &numCars);
	
	carsArr = (parkingCharge*) malloc(numCars * sizeof(parkingCharge));
	printf("Number of cars %d\n", numCars);
	populateHours(carsArr, numCars);

	printf("%lf", carsArr[0].hours);
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
void populateCharges(parkingCharge* carsArrToPopulate, int size){
	int i = 0;

	return;
}
