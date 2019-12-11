#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
 Design an algorithm where the user gives the score of the exam and the algorithm prints
the grade corresponding to the given score

*/
int main(int argc, char *argv[]) {
	int score;
	do{
		printf("\nInput the score (0-24):\n");
		scanf("%d", &score);
		if(score<0||score>24){
			printf("\nYou have input invalid number.\n");			
		}
		
	}while(score<0||score>24);
	
	switch(score){
		case 0 ... 11: 
		printf("\nYou are fail.\n");
		break;
		case 12 ... 13: 
		printf("\nYour grade is 1.\n");
		break;
		case 14 ... 16: 
		printf("\nYour grade is 2.\n");
		break;
		case 17 ... 19: 
		printf("\nYour grade is 3.\n");
		break;
		case 20 ... 22: 
		printf("\nYour grade is 4.\n");
		break;
		case 23 ... 24: 
		printf("\nYour grade is 5. \n");
		break;
		
	}
	
	return 0;
}
