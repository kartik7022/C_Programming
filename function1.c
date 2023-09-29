#include<stdio.h>
void hello();
void goodbye();
int main()
    {
        for(int i=0; i<=10; i++)
        {
        hello();
        goodbye();
        }
    }
void hello()
{
    printf("hello\n");
}
void goodbye()
{
    printf("goodbye\n");
}