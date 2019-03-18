#include<stdio.h>
int main(){
    float a,b,c,d,e,Sum,Num;
    printf("Enter marks of subject 1:");
    scanf("%f",&a);
    printf("Enter marks of subject 2:");
    scanf("%f",&b);
    printf("Enter marks of subject 3:");
    scanf("%f",&c);
    printf("Enter marks of subject 4:");
    scanf("%f",&d);
    printf("Enter marks of subject 5:");
    scanf("%f",&e);
    Sum=a+b+c+d+e;
    Num=Sum/500*100;
    printf("Subject 1:%f\n",a);
    printf("Subject 2:%f\n",b);
    printf("Subject 3:%f\n",c);
    printf("Subject 4:%f\n",d);
    printf("Subject 5:%f\n",e);
    printf("Total :%f\n",Sum);
    printf("Percentage :%f\n",Num);
    if(Num>=35){
        printf(" Result: Passed");
    }else{
        printf("Result: Failed");
    }return 0;

}