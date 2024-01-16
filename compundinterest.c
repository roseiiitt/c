// compund interest
#include <stdio.h>
#include <math.h>
int main(){

        float p, t, r, c = 0, n;
        printf("Enter principal ,time and rate:");
        scanf("%f%f%f", &p, &t, &r);
        printf("Enter  how many time interest will be  compunded per year:");
        scanf("%f", &n);
        float pe;
        pe = pow((1 + (r / n)), (n * t));
        c = p * pe;
        printf("%.4f", c);
        return 0;
}