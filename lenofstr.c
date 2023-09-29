#include<stdio.h>
int len(char name[100]);
int main(){
    char name[100];
    int count=0;
    printf("enter the name:\n");
    gets(name);
    for(int i=0;name[i]!='\0';i++){
        count+=1;
    }
    printf("the no. of words in a string are :%d\n",count);
    printf("the length:%d",len(name));

}
int len(char name[100]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count+=1;
        }
        return count;

}