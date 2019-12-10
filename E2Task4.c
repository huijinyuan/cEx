#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Design an algorithm that asks the user for the width and length of the rectangular plot,
and the width and length of the base of the rectangular house on that plot, 
and the algorithm estimates
how long it takes to cut the lawn 
when the lawnmower has a speed of 5 kilometers per hour 
and the cutter's shear width is 70 cm.

*/
int main(int argc, char *argv[]) {
	double landWidth;
	double landLength;
	double houseWidth;
	double houseLength;
	double areaOfLawn;
	double areaOfLawnMover;
	double timeOfCut; //hours 
	printf("Input the width of the land:");
	scanf("%lf", &landWidth);
	
	printf("\nInput the length of the land:");
	scanf("%lf", &landLength);
	
	printf("\nInput the width of the house:");
	scanf("%lf", &houseWidth);
	
	printf("\nInput the length of the house:");
	scanf("%lf", &houseLength);
	
	areaOfLawn= landWidth*landLength - houseWidth*houseLength; 
	areaOfLawnMover=5000*0.7;// m*m 
	timeOfCut = areaOfLawn/areaOfLawnMover*60*60; //minutes
	printf("\nThe required time to cut the lawn is %.0lf seconds. ", timeOfCut);
	
		
	return 0;
}
