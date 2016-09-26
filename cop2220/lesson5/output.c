#include <stdio.h>

/*
* Array basics
*/
int lessonOne(void){

	int foobar[10]; // int arrays are simple to manipulate
	foobar[3] = 4;
	foobar[2] = foobar[3] + 2;

	printf("%d\n", foobar[2]);

	return 0;

}

/*
* Values that haven't been defined are unknown
* An arrays index must be an integer
*
*/
int lessonTwo(void){
	int i;
	int foobar[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; // use braces to declare string literal
	for(i = 9; i >= 0; i--){ // for loops are a powerful way to loop through elements
		printf("%d ", foobar[i]);

	}

	printf("\n");

	return 0;
}

/**
* Looping data into arrays
*/
int lessonFour(void){
	int i = 0;
	int arrSize = 3;
	int foobar[arrSize];
	printf("Please enter %d array elements\n", arrSize);

	for(i = 0; i< arrSize; i++){ // gets array input
		scanf("%d", &(foobar[i])); // need to use pointer to element
	}

	for(i = 0; i < arrSize; i++){
		printf("%d ", foobar[i]);
	}
	printf("\n");

	return 0;
}

int main(void){
	// lessonOne();
	// lessonTwo();
	lessonFour();

	// printf("hello\n");
	return 0;

}
