#include<stdio.h>
int main(){
    char name[10]={'k','a','r','t','i','k','\0'};//string declaration type1
    char end[100]="the end of program!!";//string declaration typa 2
    printf("my name is ");
    for(int i=0;name[i]!='\0';i++){
        printf("%c",name[i]);
    }
printf("\n");    
puts(end);
}