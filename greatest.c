#include<stdio.h>
void main(){
	int a,i,j ;
	printf("enter lenght ");
	scanf("%d",&a);
	int n[a];
	FILE*fpt;
	fpt=fopen("array.txt","w");
	while(i<a)
	{
		
	
	printf("enter %d element");
	scanf("%d",&n[i]);
	putw(n[i],fpt);
	i++;
}
fclose(fpt);
	fpt=fopen("array.txt","w");
	while(i<a)
	{
		int b[i]=getw(fpt);
		i++;
		
	}
	fclose(fpt);
	for(i=0;i<a;i++){
		int temp=0;
		for(j=0;j<a;j++)
		{
			if(b[i]<b[j])
			{
				temp=b[j];
				b[j]=b[i];
				b[i]=temp;
				
			}
		}
	}
	printf("greatest no is %d",b[0]);
	}