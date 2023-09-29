#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[200];
    printf("enter the string 1:");
    gets(str1);
    printf("enter the string 2:");
    gets(str2);
    int x=strlen(str1);
    printf("length of str1 is:%d\n",x);
    strcat(str2,str1);
    printf("concat. output is %s\n",str2);
    strcpy(str2,str1);
    printf("the copy is:%s\n",str2);
    char str3[100]="KP";
    int i=strcmp(str3,str2);
    printf("the comparision output is:%d\n",i);

}