#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int f=fact(n);
    printf("factorial of %d is %d",n,f);

}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factnm=fact(n-1);
    int fact=factnm*n;
    return fact;
}