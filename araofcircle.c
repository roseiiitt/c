// area of circle
#include<stdio.h>
#include<math.h>
int main(){
    float a,r,p;
    float const pi=3.14;
    printf("enter radius:");
    scanf("%f",&r);
    p=pow(r,2);
    a=pi*p;
    printf("area=%f",a);
    return 0;

}