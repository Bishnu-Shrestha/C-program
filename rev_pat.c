#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Entter the length of pattern: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        int cnt = 0;
        for (j = n - i + 1; j >= 1; j--)
        {
            printf(" ");
            cnt++;
        }
        for (k = cnt; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}