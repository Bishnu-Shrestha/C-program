#include <stdio.h>
struct data
{
    char name[10];
    int age;
    char address[20];
    int phone_no;
} ;

int main()
{
    int a;
    printf("Enter number of data sets you want to insert:");
    scanf("%d", &a);
    struct data info[a];
    for (int i = 0; i < a; i++)
    {
        printf("enter your name:");
        scanf("%s", &info[i].name);
        printf("enter age:");
        scanf("%d", &info[i].age);
        printf("enter adress:");
        scanf("%s", &info[i].address);
        printf("enter phone number:");
        scanf("%d", &info[i].phone_no);
    }
    printf("\n**********RESULT********\n");
    for (int i = 0; i < a; i++)
    {
        printf("your name is %s.\n", info[i].name);
        printf("your age is %d.\n", info[i].age);
        printf("your adressis %s.\n", info[i].address);
        printf("your phone number %d.\n", info[i].phone_no);
    }
}