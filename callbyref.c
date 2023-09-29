#include<stdio.h>
int work(int a,int b, int *sum, int *sub, int *avg);
void main(){
    int a,b,sum,sub,avg;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    work(a,b,&sum,&sub,&avg);
    printf("sum=%d , sub=%d , avg=%d",sum,sub,avg);
}
int work(int a,int b , int *sum , int *sub , int *avg){
    *sum=a+b;
    *avg=(a+b)/2;
    *sub=a-b;
}