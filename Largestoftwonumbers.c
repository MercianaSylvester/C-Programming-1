#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter another number");
    scanf("%d",b);
    if(a>b){
        printf("a is larger than b");
    }else{
        printf("b is larger than a");
    }return 0;
}