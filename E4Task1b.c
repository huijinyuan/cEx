#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
 The parking company "Underground Hut" charges 2 euros for the first three parking hours.
 
  Additional parking, for more than three hours, will be charged for 0.5 euros for every hour (or part of an hour starting).
  However, the maximum charge is 10 euros for 24 hours (and parking is only for 24 hours, you do not need to care about
longer parking time than that).

 Design the program and write it in c-language.
The program will need to read parking times for three customers and print the resulting
charges for each. Create and use a function to calculate the charge. The function will
get the parking time as a parameter and return the calculated charge. Output might be
like this:
Customer Hours Charge
1 1.5 2.00
2 4.0 2.50
3 24.0 10.0
Total: 29.5 14.50

*/

int main(int argc, char *argv[]) {
	
	int minFee=2; int i;
	int car1, car2, car3;
	double parkTime1, parkTime2, parkTime3, totalParkTime,charge1, charge2, charge3, totalCharge ;
		// for car 1
		printf("Enter your car number: ");
		scanf("%d", &car1);
		printf("How many hours do you want to park? ");
		scanf("%lf", &parkTime1); 
		if(parkTime1>=3 ){
			charge1 = 2+ (parkTime1-3)*0.5; 
			if(charge1<=10) {
				charge1 = 2+ (parkTime1-3)*0.5; 
			} else {
				charge1=10; 
			}
			
		}else {
			
				charge1=2;
		}
							
		printf("%d\t %.1lf \t %.2lf\n", car1, parkTime1, charge1); 
		// for car 2
		printf("\nEnter your car number: ");
		scanf("%d", &car2);
		printf("How many hours do you want to park? ");
		scanf("%lf", &parkTime2); 
		if(parkTime2>=3 ){
			charge2 = 2+ (parkTime2-3)*0.5; 
			if(charge2<=10) {
				charge2 = 2+ (parkTime2-3)*0.5; 
			} else {
				charge2=10; 
			}
			
		}else {
				charge2=2;
		}

		printf("%d\t %.1lf \t %.2lf\n", car2, parkTime2, charge2); 
		
		// for car 3			
		printf("\nEnter your car number: ");
		scanf("%d", &car3);
		printf("How many hours do you want to park? ");
		scanf("%lf", &parkTime3); 
		
			if(parkTime3>=3 ){
			charge3 = 2+ (parkTime3-3)*0.5; 
			if(charge3<=10) {
				charge3 = 2+ (parkTime3-3)*0.5; 
			} else {
				charge3=10; 
			}
			
		}else {
				charge3=2;
		}

		printf("%d\t %.1lf \t %.2lf\n\n", car3, parkTime3, charge3); 
		
		totalParkTime= parkTime1+ parkTime2 + parkTime3; 
		totalCharge = charge1 + charge2 + charge3; 
		
		printf("%-12s%12s%12s\n", "Customer", "Hours" , "charge");	
		printf("%-12d%12.1lf%12.2lf\n", car1, parkTime1, charge1);
		printf("%-12d%12.1lf%12.2lf\n", car2, parkTime2, charge2);
		printf("%-12d%12.1lf%12.2lf\n", car3, parkTime3, charge3);
		printf("%-12s%12.1lf%12.2lf\n", "Total:", totalParkTime , totalCharge);
		//printf("Customer\tHours\tcharge\t\n");
		//printf("%12d%12.2lf%12.2lfn%d\t %.1lf\t %.2lf\t\n%d\t %.1lf\t %.2lf\t\n ", car1, parkTime1, charge1,car2, parkTime2, charge2,car3, parkTime3, charge3 );	
	 //	printf("Total:\t%.1lf\t%.2lf\t", totalParkTime,totalCharge);

	
	return 0;
}
