#include <stdio.h>
#define max 6
struct subject
{
    int a[max];
    float avg;
};
struct student
{
    char name[20];
    struct subject sub;
};

int main()
{
    int N, M;
    printf("Enter no of students: ");
    scanf("%d", &N);
    struct student Ss[N];
    for (int i = 0; i < N; i++)
    {
        printf("enter name: ");
        scanf("%s", &Ss[i].name);
        printf("enter no of subjects: ");
        scanf("%d", &M);
        for (int j = 0; j < M; j++)
        {
            printf("\tEnter marks %d subject: ", j + 1);
            scanf("%d", &Ss[i].sub.a[j]);
        }
    }
    for (int i = 0; i < N; i++)
    {
        float sum = 0;
        for (int j = 0; j < M; j++)
        {
            int temp = sum + Ss[i].sub.a[j];
            sum = temp;
        }
        Ss[i].sub.avg = sum / M;
        printf("%s's average mark is: %.3f\n", Ss[i].name, Ss[i].sub.avg);
    }
    return 0;
}