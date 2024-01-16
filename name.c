//name loop
#include<stdio.h>
int main(){
    int age;
    char naam[100];
    float gpa;
    int i,a;
    printf("Enetr how many data:");
    scanf("%d",&a);

    for(i=0;i<a;i++){
    printf("Enter Your name:");
    scanf("%s",naam);
    printf("\nEnetr your age:");
    scanf("%d",&age);
    printf("\nEnter your gpa:");
    scanf("%f",&gpa);
    }
    printf("\nName \t  Age  \t  gpa");
    printf("\n....................\n");
   
    for(i=0;i<a;i++){
    
    printf("%s",naam);
    printf("\t%d",age);
    printf("\t%f",gpa);
    printf("\n");

    }
return 0;
}