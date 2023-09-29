#include<stdio.h>
#include<math.h>
int main(){
    char a;
    printf("enter the character\n");
    scanf("%c",&a);
    if(a<=10&&a>=0)
    {
        printf("is number");
    }
    else
      printf("is not a number");
}