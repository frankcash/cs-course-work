/**
* Name: Charles Cash
* Date: October 09, 2016
* Class: COP 2220
* Assignment: Selections Quiz
* Compiled with -lm flag in GCC
*/

#include <stdio.h>
#include <math.h>

/**
* Takes in the required parameters to calculate the total cost
* Also prints final output
*/
int calcTotalPrice(int numPackageOne, int numPackageTwo, double pricePackageOne, double pricePackageTwo){

  double totalPrice = 0.0;
  totalPrice = (numPackageOne * pricePackageOne) + (numPackageTwo * pricePackageTwo);

  printf("You should order %d small package(s).\n", numPackageOne);
  printf("You should order %d large package(s).\n", numPackageTwo);
  printf("Your cost for invitations will be $%.2lf.\n", totalPrice);

  return 0;
}

/**
* Main branch logic of program to calculate how to process pricing
*/
int main(void){
  int packageOne = 50;
  int packageTwo = 200;
  int numPackageOne = 0;
  int numPackageTwo = 0;

  /** Vars from user input **/
  double pricePackageOne;
  double pricePackageTwo;
  int totalNumInvites;

  printf("What is the cost of a small package (in dollars)?\n");
  scanf("%lf", &pricePackageOne);
  printf("What is the cost of a large package (in dollars)?\n");
  scanf("%lf", &pricePackageTwo);
  printf("How many invitations are you sending out?\n");
  scanf("%d", &totalNumInvites);

  double fourPricePackageOne = pricePackageOne * 4;
  if(fabs(fourPricePackageOne - pricePackageTwo) < 60.0){
    // go with a combination of both packages

    numPackageTwo = totalNumInvites / packageTwo;
    if(totalNumInvites % 200 != 0){
      numPackageOne = ((totalNumInvites % 200) / packageOne);
      if((totalNumInvites % 200) % 50 != 0){
        numPackageOne += 1;
      }
    }

    calcTotalPrice(numPackageOne, numPackageTwo, pricePackageOne, pricePackageTwo);

  }else if(fourPricePackageOne > pricePackageTwo ){
    // cheaper to go with a package two

    numPackageTwo = totalNumInvites / packageTwo;
    if(totalNumInvites % 200 != 0){
        numPackageTwo += 1;
    }

    calcTotalPrice(0, numPackageTwo, pricePackageOne, pricePackageTwo);

  }else if(fourPricePackageOne < pricePackageTwo ){
    // cheaper to go with package ones

    numPackageOne = totalNumInvites / packageOne;
    if(totalNumInvites % 50 != 0){
      numPackageOne += 1;
    }

    calcTotalPrice(numPackageOne, 0, pricePackageOne, pricePackageTwo);


  }


  return 0;
}
