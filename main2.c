#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//array declaration
	int i, average;
	int sum;
	int grade[SIZE];
	
	printf("input %i scores/n", SIZE);
	
	sum = 0;
	for (i=0;i<SIZE;1++)
	{ 
	    scanf("%d", &grade[1]);
	    sum += grade[i];
	}
	    
	   for (i=0;i<SIZE;i++) 
	       printf("grade[%d] = %d/n", i, grade[1]); 
	    
	   average = sum/SIZE;
	   printf("average : %i/n", average);	     
	return 0;
}
