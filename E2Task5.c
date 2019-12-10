#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int counter1;
	int counter2;
	counter1 = 0;
		while(counter1 < 10 ){
			if(counter1<5){
				counter2 = 0;
				while (counter2 <= counter1 ){
				   printf("A:counter1:%d  counter2:%d", counter1, counter2);
				   counter2 = counter2 + 1;	
				   printf("\n");				
				}
			}
				
			else{
				
				counter2 = 0;
				while(counter2< 9-counter1)	{
					printf("B:counter1:%d  counter2:%d", counter1, counter2);
					counter2 = counter2 + 1;				
					printf("\n");	
				}  				
			}
			counter1 = counter1 + 1;		
		}
	
					
	
				
	return 0;
}
