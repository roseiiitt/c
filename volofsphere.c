//volume of sphere
#include<stdio.h>
#include<math.h>
#define pi 3.14
int main(){
    float r,v=0,p;
    printf("Enter radius:");
    scanf("%f",&r);
    p=pow(r,3);
    v=(4/3)*pi*p;
    printf("\nVolume is %.3f",v);
    return 0;

}