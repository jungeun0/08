#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char *pc;
	int *pi;
	double *pd;
	
	pc = (char*)10000; //char�� bite �� 
	pi = (int*)10000; // int�� bite �� 
	pd = (double*)10000; // double�� bite �� 
	
	printf("before : pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	pc++;
	pi++;
	pd++;
	printf("after : pc=%d, pi=%d, pd=%d\n",pc,pi,pd);
	
	
	
	
	
	return 0;
}
