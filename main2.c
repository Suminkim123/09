#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void print_array(int a[], int size)


int main(int argc, char *argv[]) {
	
	//array declaration
	int list[SIZE] = {1, 2, 3, 4};
	
    printf_array(list, SIZE);
    square_array(list, SIZE);
    print_array(list, SIZE);
    
    return 0;
    
}

void square_array(int a[], int size)
{
	int i;
	for (i=0;i<size;i++)
	    a[i] = a[i]*a[i];
}

void print_array(int a[], int size)	
{
	int i;
	for (i=0;i<size;i++)
	    printf("%3d ", a[i]);
	printf("/n");	
	
	
	
	
	     
	return 0;
}
