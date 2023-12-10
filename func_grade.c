#include <stdio.h>
char result(int, int, int, int, int);
int main()
{
    int a, b, c, d, e;
    printf("enter your marks in 5 subjects:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    char g = result(a, b, c, d, e);
    printf("your have obtained %c grade.", g);
    return 0;
}
char result(int a, int b, int c, int d, int e)
{
    char G[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int avg = (a + b + c + d + e) / 5;
    if (a || b || c || d || e <= 50)
        return G[5];
    if (avg >= 90)
        return G[0];
    else if (avg >= 80)
        return G[1];
    else if (avg >= 70)
        return G[2];
    else if (avg >= 60)
        return G[4];
    else if (avg >= 50)
        return G[4];
    else
        return G[5];
}