#include<stdio.h>
struct data
{
	int roll;
	char name[20];
	int age;
};
int main()
{
	int i,j,a,count=0;
	printf("enter no of record:");
	scanf("%d",&a);
	struct data s[a];
	for(i=0;i<a;i++)
	{
		printf("name:");
		scanf("%s",&s[i].name);
		printf("roll:");
		scanf("%d",&s[i].roll);
		printf("age:");
		scanf("%d",&s[i].age);
	}
	printf("\nDisplaying data:\n");
	for(i=0;i<a;i++)
	{
		printf("\nname: %s",s[i].name);
		printf("\nroll: %d",s[i].roll);
		printf("\nage: %d\n",s[i].age);
	}
	for(i=0;i<a;i++)
	{
	
		if(s[i].age>=15&&s[i].age<=20)
		{
			count++;
		}
	}
	printf("\nThe count of students btwn 15-20: %d",count);
		printf("\nDisplaying the age group data:\n");
	for(i=0;i<a;i++)
	{
	
		if(s[i].age>=15&&s[i].age<=20)
		{
		printf("\nname: %s",s[i].name);
		printf("\nroll: %d",s[i].roll);
		printf("\nage: %d\n",s[i].age);
		}
	}
return 0;	
}