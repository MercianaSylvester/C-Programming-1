#include<stdio.h>
int main(){
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    int ch;
    scanf("%d",&ch);
    int a,b,c;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Enter another Number: ");
    scanf("%d",&b);
    if(ch==1){
        c=a+b;
        printf("Addition: %d",c);
    } else if(ch == 2){
        c=a-b;
        printf("Subtraction: %d",c);
    } else if(ch==3){
        c=a*b;
        printf("Multiplication: %d",c);
    } else if(ch==4){
        c=a/b;
        int d=a%b;
        printf("Quotient: %d and Remainder: %d",c,d);
    } else {
        printf("Invalid Choice/Input");
    }
    return 0;
}