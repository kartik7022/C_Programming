#include<stdio.h>
int count(char str[100]);
int main(){
    char string[100];
     printf("enter a string:\n");
     gets(string);
     printf("the number of vowels are : %d",count(string));
}
int count(char str[100]){
    int cont=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] =='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            cont+=1;
        }
        else{
            continue;;
        }
    }
    return cont;
}