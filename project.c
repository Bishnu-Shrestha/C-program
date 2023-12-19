#include <stdio.h>
#include <string.h>
struct rec
{
    char name[15];
    char scl_nam[30];
    int percent;
} R;
int main()
{
    int i, n, s;
    FILE *fpt, *tpt;
    printf("\n****** MENU ******\n1) Add records.\n2) Search record.\n3) Display all records.\n4) Delete a record.\n Enter choise(1-4): ");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
        fpt = fopen("SEEC.REC", "a");
        printf("Number of records to add: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            printf("Enter student's name: ");
            scanf("%s", &R.name);
            printf("Enter schools name: ");
            scanf("%s", &R.scl_nam);
            printf("Enter percentage obtained: ");
            scanf("%d", &R.percent);
            fwrite(&R, sizeof(R), 1, fpt);
        }
        fclose(fpt);
        break;
    case 2:
        fpt = fopen("SEEC.REC", "r");
        while (fread(&R, sizeof(R), 1, fpt) == 1)
        {
            if (R.percent > 85)
                printf("\nStudent name: %s\nSchool name: %s\nPercentage: %d\n", R.name, R.scl_nam, R.percent);
        }
        fclose(fpt);
        break;
    case 3:
        fpt = fopen("SEEC.REC", "r");
        while (fread(&R, sizeof(R), 1, fpt) == 1)
        {
            printf("\nStudent name: %s\nSchool name: %s\nPercentage: %d\n", R.name, R.scl_nam, R.percent);
        }
        fclose(fpt);
        break;
    case 4:
        tpt = fopen("temp.REC", "w");
        char t[15];
        fpt = fopen("SEEC.REC", "r");
        printf("Enter name of student to delete their records: ");
        scanf("%s", &t);
        while (fread(&R, sizeof(R), 1, fpt) == 1)
        {
            if (strcmpi(R.name, t) != 0)
            {
                fwrite(&R, sizeof(R), 1, tpt);
            }
        }
        fclose(fpt);
        fclose(tpt);
        if (remove("SEEC.REC") == 0)
        {
            printf("The record has been removed succesfully.");
        }
        rename("temp.REC", "SEEC.REC");

        break;
    default:
        printf("\n!!!!Error!!!!!\n\tEnter numbers according to list:");
        break;
    }
    return 0;
}