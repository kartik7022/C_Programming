#include<stdio.h>
void indian();
void french();
char main(){
    printf("enter the nationality\n");
    char c;
    scanf("%c\n",&c);
    if(c=='i')
    {
    indian();
    }
    else if(c=='f')
    {
    french();
    }
    else
    {
    printf("UNKNOWN\n");
    }
}
void indian()
{
    printf("namaste\n");
}
void french()
{
    printf("bonjor\n");
}