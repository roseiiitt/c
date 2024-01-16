//quadratic equation
#include<stdio.h>
#include <math.h>
int  main(){
    float a,b,c,d,e,f;
    printf("enter value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt(b*b - 4*a*c);
    e=(-b-d)/2*a;
    f=(-b+d)/2*a;
    printf("+ve %f \t -ve %f",e,f);
    return 0;
}