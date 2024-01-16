//swap
#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("First nuber is %d and second number is %d",a,b);
    //swapping
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping:");
    printf("\nFirst nuber is %d and second number is %d",a,b);
    return 0;

}