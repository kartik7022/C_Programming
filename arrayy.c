#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            continue;
        }
        else{
            printf("%d\n",arr[i]);
        }

    }
}