//quotient reminder
#include<stdio.h>
int main(){
    int a,b,rem,q;
    printf("Enter two differrent numbers:");
    scanf("%d%d",&a,&b);
    rem=a%b;
    q=a/b;
    printf("reminder is %d and quotient is %d",rem,q);
    return 0;
}