#include<stdio.h>
int main(){
    int n;
    for(int i=0;i<=10;i++){
        if(i==6){
            continue;
        }
        printf("%d\n",i);
    }
}