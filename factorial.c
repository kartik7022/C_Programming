#include<stdio.h>
int main(){
int n;
printf("enter a number %d\n",n);
scanf("%d",&n);
int ans=1;
for(int i=1;i<=n;i++)
{
ans=ans*i;}
printf("the factorial is %d",ans);

}