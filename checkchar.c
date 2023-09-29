#include<stdio.h>
void check(char str[100] , char ch);
int main(){
    char string[100];
    char CH;
    printf("enter the string:\n");
    gets(string);
    printf("enter the character:\n");
    scanf("%c",&CH);
    for(int i=0;i!='\0';i++){
        if(string[i]==CH){
            printf("yes");
        }
        else{
            printf("no");
        }
    }
}