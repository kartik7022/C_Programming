#include<stdio.h>
#include<string.h>
int main(){
    char str[100],str1[100];
    printf("enter the string\n");
    gets(str);
    puts(str);
    printf("the length of string is : %d\n", strlen(str));
    printf("the copy of %s is %s\n",str,strcpy(str1,str));
}