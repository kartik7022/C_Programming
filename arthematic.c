#include<stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int main(){
    int a,b;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    mul(a,b);
}
int sum(int a,int b){
    printf("the sum is:%d\n",a+b);
}
int sub(int a,int b){
    printf("the sub is:%d\n",a-b);
}
int mul(int a,int b){
    printf("the mul is:%d\n",a*b);
}