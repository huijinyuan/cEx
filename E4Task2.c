#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Write a program in c-language where the main function reads two integer variables number and power.
Create a function riseToPower…
int riseToPower(int number, int power);

Call that function in the main function. 

The function riseToPower will calculate the value of equation numberpower 
and return the value to the main function.

For example, the call raiseToPower(3,4) calculates product of 3 * 3 * 3 * 3.
The program will accept only positive integers as values for the power. 
 
You may not use any available library functions to calculate the number to the given power.

*/

/* function declaration */
int riseToPower(int number, int power); 
int remind(int num);	

int main(int argc, char *argv[]) {
	/* local variable definition */
	int number, power, ret;
	do{		
		printf("Enter a positive number (0-n): ");
		scanf("%d",&number);
		/*call print a positive number*/
		remind(number);
	}while(number<0);
	
	do{
		printf("How much power do you want? (1-n):");
		scanf("%d", &power);
		/*call print a positive number*/
		remind(power);		
	}while(power<0);	
	
	/* calling a function to get the value of the number's power  */
	ret = riseToPower(number, power);
	printf("\nThe power of the number is %d.\n", ret);
	
	return 0;
}

int riseToPower(int num1, int num2){
	/* local variable declaration */
	int result = pow(num1, num2);
	return result;
} 	

int remind(int num){
/* local variable declaration */	
	int remind;
		if(num<0)
			{
				printf("Please input a positive number ! \n");
			}		
	return remind ;
}

	
