#include <stdio.h>
#include <math.h>
int FIND(float, float, float, float);
int main()
{
    float w, x, y, z;
    printf("Enter four numbers to satisfy the eq (x^3+y^3+z^3=a^3)");
    scanf("%f%f%f%f", &w, &x, &y, &z);
    // printf("%f+ %f+ %f= %f", powf(w, 3), powf(x, 3), powf(y, 3), powf(z, 3));
    int stfy = FIND(w, x, y, z);
    if (stfy == 100)
        printf("\nThe number satisfies the equation.");
    else
        printf("\nThe numbers dont satisfy the equaton");
    return 0;
}
int FIND(float a, float b, float c, float d)
{
    if (powf(a, 3) + powf(b, 3) + powf(c, 3) == powf(d, 3))
        return 100;
    else
        return 200;
}