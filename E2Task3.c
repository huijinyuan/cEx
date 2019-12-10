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
		printf("\nInput the score (0-24):");
		scanf("%d", &score);
		if(score<0||score>24){
			printf("\nYou have input invalid number.");			
		}
		
	}while(score<0||score>24);
	
	switch(score){
		case 0 ... 11: 
		printf("\nYour are fail.");
		break;
		case 12 ... 13: 
		printf("\nYour grade is 1.");
		break;
		case 14 ... 16: 
		printf("\nYour grade is 2.");
		break;
		case 17 ... 19: 
		printf("\nYour grade is 3.");
		break;
		case 20 ... 22: 
		printf("\nYour grade is 4.");
		break;
		case 23 ... 24: 
		printf("\nYour grade is 5");
		break;
		
	}
	
	return 0;
}
