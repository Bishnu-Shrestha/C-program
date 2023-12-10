// Program to find average income and expense in an office year round....
#include <stdio.h>
#include <string.h>

typedef struct
{
    char month[20];
    double income;
    double expenditure;
} Record;

int main()
{
    Record records[12];
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double totalIncome = 0, totalExpenditure = 0;
    int i;

    // Input records
    for (i = 0; i < 12; i++)
    {
        strcpy(records[i].month, months[i]);
        printf("Enter income for %s: ", records[i].month);
        scanf("%lf", &records[i].income);
        printf("Enter expenditure for %s: ", records[i].month);
        scanf("%lf", &records[i].expenditure);
        totalIncome += records[i].income;
        totalExpenditure += records[i].expenditure;
    }

    // Display records
    printf("\nMonth\t\tIncome\t\tExpenditure\n");
    for (i = 0; i < 12; i++)
    {
        printf("%s\t\t%.2lf\t\t%.2lf\n", records[i].month, records[i].income, records[i].expenditure);
    }

    // Display total and average income and expenditure
    printf("\nTotal income: %.2lf\n", totalIncome);
    printf("Total expenditure: %.2lf\n", totalExpenditure);
    printf("Average income: %.2lf\n", totalIncome / 12);
    printf("Average expenditure: %.2lf\n", totalExpenditure / 12);

    return 0;
}
