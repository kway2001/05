#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sum=0;
	int i;
	int j;
	
	printf("input a number: ");
	scanf("%i", &j);	
	
	for(i=1; i<=j; i++)
		sum += i;
	
	printf("the sum result is %i\n", sum);
	
	return 0;
}
