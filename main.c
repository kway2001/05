#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("input number: ");
	scanf("%d", &a);
	
	if (a>0)
		printf("%d is positive number\n", a);
	else if (a==0)
		printf("%d is zero\n", a);
	else
		printf("%d is negtive number\n", a);
	
	return 0;
}
