#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	
	printf("���� �ϳ��� �Է��ϼ���.: ");
	scanf("%d", &a);
	
	if (a<0)
		a = a*(-1);
	
	printf("������ %i �Դϴ�.\n", a);
	
	
	return 0;
}
