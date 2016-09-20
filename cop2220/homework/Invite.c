/**
* Name: Charles Cash
* Date: September 20, 2016
* Class: COP 2220
* Assignment: Selections Quiz
*/

#include <stdio.h>
#include <math.h>

int main(void){
  int packageOne = 50;
  int packageTwo = 200;

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

  printf("Vars are: %lf %lf %d\n", pricePackageOne, pricePackageTwo, totalNumInvites);
  double fourPricePackageOne = pricePackageOne * 4;
  if(fabs(fourPricePackageOne - pricePackageTwo) < 0.01){
    printf("diff is less than 0.001\n");
    // configuration is indifferent
  }else if(fourPricePackageOne > pricePackageTwo ){
    // cheaper to go with a package two

  }else if(fourPricePackageOne < pricePackageTwo ){
    // cheaper to go with package ones

  }else{
    printf("%lf\n", (fabs(fourPricePackageOne - pricePackageTwo)));

  }

  // TODO: output
  return 0;
}
