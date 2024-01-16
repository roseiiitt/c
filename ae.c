//age group
#include <stdio.h>
int main(){
    int a;
    printf("Enter age:");
    scanf("%d",&a);
    if(a>=60){
        printf("Above 60:");
    }
    else if (a>=40 && a<60){
        printf("Your age is between 40-59 :");

    }
    else if(a  >= 20 && a<40){
        printf("age betwn 20-39");
    }
    else {
        printf("Below 20");
    }
    return 0;
}