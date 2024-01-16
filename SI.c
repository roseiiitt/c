//Simple interest
#include<stdio.h>
int main()
{
    float r,SI=0;
    float p,t;
    printf("Enter principal:");
    scanf("%f",&p);
    printf("Enter time:");
    scanf("%f",&t);
    printf("Enter rate:");
    scanf("%f",&r);
    SI=(p*t*r)/100;
    printf("\nSI=%f",SI);
    return 0;
}