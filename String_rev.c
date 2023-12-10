#include <stdio.h>
#define max 15
int main(){
	char a[max];
	int n=0;
	printf("Enter your name: ");
	gets(a);
		printf("Unreversed string is %s",a);

	while(a[n]!='\0')
	n+=1;
	
	printf("\nlength of sting =%d",n);
	for (int i=0; i<n/2;i++)
	{
		char temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	
	printf("\nreversed string is %s",a);
}