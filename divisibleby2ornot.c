#include<stdio.h>
#include<math.h>
long main(){
    long x;
    printf("enter the number\n");
    scanf("%ld",&x);
    if(x%2==0){
        printf("the number %ld divisible by 2",x);
    }
    else
    printf("the number %ld not divisible by 2",x);
}