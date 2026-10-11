#include<stdio.h>
int main()
{
	int max, min, x, cont;
	scanf_s("%d", &x);
	max = x;
	min = x;
	for (cont = 0;cont < 9;cont++) {
		scanf_s("%d", &x);
		if (max - x <= 0)
			max = x;
		if (min - x >= 0)
			min = x;
	}
	printf("最大值是%d，最小值是%d\n", max, min);
	return 0;
}