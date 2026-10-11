#include<stdio.h>
int main()
{
	int x, cont;
	printf("请输入一个正整数\n");
	scanf_s("%d", &x);
	for (cont = 1;cont <= x;cont++) {
		int i, j;
		for (i = x - cont;i > 0;i--) {
			printf(" ");
		}
		for (j = 1;j <= 2 * cont - 1;j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}