#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//array declaration
	int i;
	int grade[5];
	
	//value input
	grade[0] = 10;
    grade[1] = 20;
   	grade[2] = 30;
    grade[3] = 40;
    grade[4] = 50;
    
    //print
    for (i=0;i<5;i++)
        printf("student %i's grade : %i/n" , i, grade[1]);
        
    



	return 0;
}
