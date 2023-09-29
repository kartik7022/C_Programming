#include<stdio.h>
int sum(int n);
void main(){
    int s=sum(3);
    printf("sum is %d",s); 
}
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumnm=sum(n-1);
    int sum=sumnm+n;
    return sum;
}