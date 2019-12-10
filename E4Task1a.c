#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
 2 euros for the first three parking hours. 
 
 Additional parking, for more than three hours, will be charged for 0.5 euros for every hour (or part of an hour starting). 
 However, the maximum charge is 10 euros for 24 hours (and parking is only for 24 hours, you do not need to care about
longer parking time than that).

 Design the program and write it in c-language.
The program will need to read parking times for three customers and print the resulting charges for each. 
Create and use a function to calculate the charge. 
The function will get the parking time as a parameter and return the calculated charge. 
Output might be like this:
Customer Hours Charge
1 1.5 2.00			>3h ==> 2+ 0.5*extra hours
2 4.0 2.50
3 24.0 10.0
Total: 29.5 14.50

*/

int main(int argc, char *argv[]) {
	
	double minFee = 2; 
	int i;
	int carNumber1; 
	int carNumber2;
	int carNumber3;
	double parkTime1;
	double partTime2; 
	double parkTime3;
	double charge1;
	double charge2;
	double charge3;
	
	for(i=0; i<3; i++){
		printf("\nEnter the car number: \n");
		scanf("%d", &carNumber1);
		printf("\nHow many hours do you want to park?\n");
		scanf("%lf", &parkTime1); 
	
	if(parkTime1>=3 && parkTime1 <24){
		
		charge1 = 2 + (parkTime1-3)*0.5;
		
		if( charge1<=10){
			
			printf("%d \t %.1lf \t  %.2lf \n", carNumber1, parkTime1, charge1 );
			
		}else{
			printf("%d \t %.1lf \t 10 \n.", carNumber1, parkTime1);
		}
		
	} else {
		
		printf("%d\t  %.1lf \t 2\n.",  carNumber1, parkTime1);
	}
	
		
	}	
	
	
	return 0;
}
