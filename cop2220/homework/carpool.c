/**
* Name: Charles Cash
* Date: September 20, 2016
* Class: COP 2220
* Assignment: Car-Pool Savings Calculator
*/

#include <stdio.h>
#include <math.h>

/**
* Gets user input and then calculates total cost
* total cost = ((total miles / miles per gallon ) * cost per gallon) + total parking fees + total tolls
*/
int main(void){
  double costGas;
  double totalCost;

  /** Vars from user input  **/
  double totalMiles;
  double costGallon;
  double milesPerGallon;
  double parkingFees;
  double tollsPerDay;


  printf("Please enter total miles driven (in dollars)\n");
  scanf("%lf", &totalMiles);
  printf("Please enter cost per gallon of gas (in dollars)\n");
  scanf("%lf", &costGallon);
  printf("Please enter miles per gallon (in dollars)\n");
  scanf("%lf", &milesPerGallon);
  printf("Please enter parking fees per day (in dollars)\n");
  scanf("%lf", &parkingFees);
  printf("Please enter toll fees per day (in dollars)\n");
  scanf("%lf", &tollsPerDay);

  costGas = (totalMiles / milesPerGallon) * costGallon; // Calculates cost for gas
  totalCost += costGas + parkingFees + tollsPerDay; // Calculates total cost

  printf("Total cost per day is: $%.2lf\n", totalCost);
  return 0;
}
