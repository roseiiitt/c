// quadratic eqn ax^2+bx+c
#include <stdio.h>
#include <math.h>
int main()
{

    float a, b, c, d, r1, r2;
    printf("Enter the value of a,b and c:");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        printf("The roots are real and equal");
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("\nThe 1st root is %.3f and second root is %.3f", r1, r2);
    }

    if (d > 0)
    {
        printf("The roots real and different:");
        r1 = (-b + (sqrt(d))) / (2 * a);
        r2 = (-b + (sqrt(d))) / (2 * a);
        printf("\nThe 1st root is %.3f and second root is %.3f", r1, r2);
    }
    else
    {
        printf("Roots are imaginary:");
    }
    return 0;
}