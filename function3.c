#include<stdio.h>
void tables(int n);
int  main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("the tables of number %d is\n",n);
    tables(n);
}
void tables(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}