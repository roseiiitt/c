// Name,occupation,age and gpa
#include<stdio.h>
int main(){
    int age;
    char naam[100],occ[30];
    float gpa;
    printf("Enter Your name:");
    scanf("%s",naam);
    printf("\nEnetr your age:");
    scanf("%d",&age);
    printf("\nEnter your occupation:");
    scanf("%s",occ);
    printf("\nEnetr your gpa:");
    scanf("%f",&gpa);
    printf("\nYour Name is %s",naam);
    printf("\nYour age is %d",age);
    printf("\nYour occupation is %s",occ);
    printf("\nYour gpa is %.2f",gpa);

}