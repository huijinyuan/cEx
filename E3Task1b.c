#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Logic to print hollow square star pattern
// Star patterns in C programming ( examples from internet)
//https://codeforwin.org/2015/07/star-patterns-program-in-c.html


int main(int argc, char *argv[]) {
	int x,y,z;
	printf("Input the row number(s) :");
	scanf("%d", &z);
		//control the rows
		for(x=1; x<=z; x++)
		{
			for(y=1; y<=z; y++) // control the culoum
			{	
				if(x==1 ||x==z ||y==1 || y==z)
					{
						printf("*\t");
					}
					else printf("?\t");	//may use other symbol, as well as the empty space					
			}	
				printf("\n");	//change the line
				
	}

	return 0;
}
