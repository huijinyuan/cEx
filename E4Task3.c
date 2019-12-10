#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
 Using c-language, write a program where the year (integer) is read from the user in the main function. 
 In the main function, there is a call to a function that receives the year as a parameter. 
 That function determines whether the given year is a leap year or not. 
 If the given year is a leap year, the function returns 1 (number one).
  Otherwise, the function returns 0 (zero).
*/

/* declare a function*/
int leapYear(int num); 

//main function
int main(int argc, char *argv[]) {
	int year;
	
	do{
		printf("Please input a year: ");
		scanf("%d", &year);
		//check what is rthe input year
		//printf("The year is %d . \n", year);
		if(year<=0)
		{
			printf("Please input a positive year!\n ");
		}
		
	}while(year<=0);	
	
	if(leapYear(year)==1){
		printf("The year of %d is a leap year. \n", year);
	} else
		printf("The year of %d is  not a leap year. \n", year);
	
	return 0;
}

int leapYear(int year)
{
	if(year%400==0)
	{
		return 1;
	}	
	else if(year%100==0)
	{
		return 0;
	}
	else if(year%4==0)
	{
		//printf("The year of %d is a leap year. \n", year);	
		return 1;
	}
	else
	{
		
		return 0;	
	}
	
	return year;	
}

