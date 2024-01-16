//find 3 even number
#include<stdio.h>
int main(){
    int pro=1,i,n,count=0,sum=0;
    for(i=2;i>1;i++){ 
        printf("enter a number:");
        scanf("%d",&n);
        if(n%2==0){
            count++;
            printf("You have entered this %d number which is even:\n",n);
            sum+=n;
        }
        if(count==3){
            printf("Now you entered total of three even numbers:");
            break;
        } 
    }
    printf("\nSum=%d",sum);
}