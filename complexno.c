//complex number a+ib
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a real number and imaginary number:");
    scanf("%d%d",&a,&b);
    // for second number
    int c,d;
    printf("Enter real and imaginary number :");
    scanf("%d%d",&c,&d);
    int e=a+c;
    int f=b+d;
    printf("In the form of complex number %d +i %d",e,f);
    return 0;
}