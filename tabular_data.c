#include <stdio.h>
void somation(int *, int *, int *, int);
int main()
{
	int a[10], b[10], c[10], x;
	printf("enter the number oif rows of data:");
	scanf("%d", &x);
	printf("enter two groups of datas: \n enter the first group of data:");
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter second group of data:");
	for (int i = 0; i < x; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("the first and second groups of data are:\n");
	for (int i = 0; i < x; i++)
	{
		printf("%d\t%d\n", a[i], b[i]);
	}
	somation(a, b, c, x);
	printf("The result:\n");
	for (int i = 0; i < x; i++)
	{
		printf("%d \t\n", c[i]);
	}
}
void somation(int *m, int *n, int *o, int x)
{
	for (int i = 0; i < x; i++)
	{
		*o = *m + *n;
		m++;
		n++;
		o++;
	}
}