#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter a number");
    scanf("%d",&b);
    printf("Enter a number");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater");
    }else if(b>a && b>c){
        printf("b is greater");
    }else{
        printf("c is greater");
    }return 0;
}  