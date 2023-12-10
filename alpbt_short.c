// Program to short structure data alpjabetically...
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[15];
    char adr[25];
    // other fields...
} Person;

int main()
{
    int i, j, n;
    Person temp;
    printf("Enter the number of people: ");
    scanf("%d", &n);
    Person people[n];

    // Get user input
    for (i = 0; i < n; i++)
    {
        printf("\nEnter data for person %d: \n", i + 1);
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Address: ");
        scanf("%s", people[i].adr);
    }

    // Bubble sort
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (strcmp(people[j].name, people[j + 1].name) > 0)
            {
                temp = people[j];
                people[j] = people[j + 1];
                people[j + 1] = temp;
            }
        }
    }

    // Print sorted names
    printf("\nSorted data on basis of name:\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Name :%s\n Adsress: %s\n", people[i].name, people[i].adr);
    }

    return 0;
}
