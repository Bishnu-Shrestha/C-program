#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter quantity of data to add");
	scanf("%d",&n);
	int a[n],b[n],*P[n],*q[n];
	printf("Enter those numbers");
	
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		q[i]=&a[i];
		sum+=*q[i];
	}
	printf("sum=%d",sum);

	
	return 0;
}