#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void print_array(int a[], int size)
int main(int argc, char *argv[]) {
	
	//array declaration
	int A[ROWS][COLS] = {
		{2,3,0}
		{8,9,1}
		{7,0,5} };
		
	int B[ROWS][COLS] = {
	    {1,0,0},
        {0,1,0},
        {0,0,1}	};
        
    int C[ROWS][COLS];
    
    addMatrix(A,B,C);
    printMatrix(C);
	
	
	return 0;
    
}

void addMatrix(int A[][COLS], int B[][COLS],  int C[][COLS])
{
	int i, j;
	
	//C = A+B
	for (i=0;i<ROWS;i++)
	    C[i][j] = A[i][j]+B[i][j];
}

void printMatrix(int A[][COLS])	
{
	
	
	//print using for loop
	int i, j;
	
	for (i=0;i<ROWS;i++)
	    printf("%d ", A[i][j]);
	printf("/n");	
	
	
	
	
	     
	return 0;
}
