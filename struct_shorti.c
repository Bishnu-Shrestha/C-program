// program to short data in structure and display the result in thabular form....
#include <stdio.h>
typedef struct
{
    char name[20];
    int roll;
    char stream[10];
    int age;
} student;
int main()
{
    int num;
    printf("Enter number of students: ");
    scanf("%d", &num);
    student St1[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter roll num: ");
        scanf("%d", &St1[i].roll);
        printf("Enter name of student: ");
        scanf("%s", &St1[i].name);
        printf("Enter stream: ");
        scanf("%s", St1[i].stream);
        printf("Enter age of student: ");
        scanf("%d", &St1[i].age);
    }
    printf("\nBefore shorting\n");
    printf("\nRoll num\tName\tStream\tAge\n");
    for (int i = 0; i < num; i++)
    {
        printf("\n\t%d\t%s\t%s\t%d.\n", St1[i].roll, St1[i].name, St1[i].stream, St1[i].age);
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (St1[i].roll < St1[j].roll)
            {
                student temp = St1[i];
                St1[i] = St1[j];
                St1[j] = temp;
            }
        }
    }
    printf("\nAfter shorting\n");
    printf("\nRoll num\tName\tStream\tAge\n");
    for (int i = 0; i < num; i++)
    {
        printf("\n\t%d\t%s\t%s\t%d.\n", St1[i].roll, St1[i].name, St1[i].stream, St1[i].age);
    }
}
