#include <stdio.h>

#include <string.h>

#define max 2

struct employees
{
    char name[20];
    char department[15];
    float salary;
} Emp[max];

struct employees reed();

int main()
{
    char a[20];
    
    for (int i = 0; i < max; i++)
    {
        printf("Enter name:");
        gets(Emp[i].name);
        printf("Enter department:");
        gets(Emp[i].department);
        printf("Enter salary:");
        scanf("%f", &Emp[i].salary);
        getchar();
    }
    
    printf("******Menu******\n\tEnter name to display the data: ");
    gets(a);
    
    for (int i = 0; i < max; i++)
    {
        if (strcmpi(a, Emp[i].name) == 0)
        {
            printf("\nDepartment: ");
            puts(Emp[i].department);
            printf("Salary: %.4f", Emp[i].salary);
            return 0;
        }
    }
    
    printf("There is no employ named %s.", a);
    return 0;
}

struct employees reed()
{
    struct employees E1[max];
    for (int i = 0; i < max; i++)
    {
        printf("Enter name:");
        gets(E1[i].name);
        printf("Enter department:");
        gets(E1[i].department);
        printf("Enter salary:");
        scanf("%f", &E1[i].salary);
        getchar();
    }
    return E1[max];
}
