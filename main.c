#include <stdio.h>
#include <stdlib.h>

   /* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int sum(int a, int b){
				
		return a + b;
	}
	int sub(int a, int b){
		
		return a = b;
	}
	int mul(int a, int b){
		return a * b ;
		
	}
	int nanugi(int a, int b){
		
		return a/b ;
	}
int main(int argc, char *argv[]) {
	
	int i;
	int j;
	char k;
	int (*function)(int,int);
	


	printf("input calculation : ");
	scanf("%d %s %d",&i, &k, &j);
	
	switch(k){
		
		case '+' :
			function = sum;
			break;
		case  '-' :
			function = sub;
			break;
		case '*' :
			function = mul;
			break;
		case '/' :
			function = nanugi;
			break; 
		
		
	}
		
		
	
	printf("result : %i\n",function(i,j));	
	
	
	
	
	
	
	return 0;
}




