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
	
		//input the land width
	do{
		printf("\nInput the width of the land (m): ");
		scanf("%lf", &landWidth);
		if(landWidth<=0)
		printf("\nPlease input an positive number! \n");
	}while(landWidth<=0); //check the input is > 0
	
	// compare the landWidth and houseWidth
	do{	
		//input the land length 
		do{
			printf("\nInput the length of the land(m)): ");
			scanf("%lf", &landLength);	
			if(landLength<=0)
			printf("\nPlease input a positive number! \n  ");
		}while(landLength<=0); //check the input is > 0
		if(landWidth>=landLength)
		{
			printf("Please input the land length which is longer than %.2lf m! \n", landWidth );
		}
	}while(landWidth>=landLength); 


	//compare the land width and house width 
	
	do{
					//input the  house width	
			do{
				printf("\nInput the width of the house(m): ");
				scanf("%lf", &houseWidth);		
				if(houseWidth<=0)
				printf("\nPlease input a positive number! \n  ");
			}while(houseWidth<=0);//check the input is > 0
		if(houseWidth>=landWidth-1)
		{
			printf("Please input the house width is shorter than %.2lf m. \n", landWidth-1); 	
		}
		
	}while(houseWidth>=landWidth-1); 


	//compare the house length and land length ---- 1 
	//compare the house width and length --- 2 
	do{
			//input the length of the house
		do{
			printf("\nInput the length of the house(m): ");
			scanf("%lf", &houseLength);
			if(houseLength<=0)
			printf("\nPlease input a positive number! \n  ");
		}while(houseLength<=0);//check the input is > 0
		
		if(houseLength>=landLength-1 || houseLength<=houseWidth+1)
		{
			printf("Please input the house length is shorter than %.2lf m, and longer than  %.2lf m. \n", landLength-1, houseWidth+1);
		}
			
	}while(houseLength>=landLength-1 || houseLength<=houseWidth+1);	
	

	
		
	return 0;
}
