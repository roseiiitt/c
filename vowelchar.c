// character and vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    printf("Enetr a character:");
    scanf("%c",&a);
    if((a>='a' && a<='z')|| (a>='A' && a<='Z')){
        printf("It is a character:");

        // checking vowel or not
        char b =toupper(a);
        if(b=='A' || b=='E' || b=='I'||b=='O' || b=='U'){
            printf("\nIt is vowel:");
        }
        else {
            printf("\n it is consonant:");
        }
    }
    else{
        printf("It is not character:");
    }
    return 0;
}