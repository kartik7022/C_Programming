#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;
    printf("age=%d\n",*ptr);
    printf("address=%u\n",ptr);
    printf("aaa=%d",&ptr);
    ptr++;
    printf("address=%u\n",ptr);
}