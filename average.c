#include<stdio.h>
#include<math.h>
int main(){
    int num1,num2,num3;
    float avg;
    printf("enter the first number\n");
    scanf("%d",&num1);
    printf("enter the second number\n");
    scanf("%d",&num2);
    printf("enter the third number\n");
    scanf("%d",&num3);
    avg=((num1+num2+num3)/3);
    printf("the average of %d,%d and %d is %f",num1,num2,num3,avg);

}