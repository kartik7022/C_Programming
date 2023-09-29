#include<stdio.h>
struct students {
    char name[100];
    char address[100];
    char college[100];
    int age;
    int semester;
    float CGPA;
};
union student {
    char name[100];
    char address[100];
    char college[100];
    int age;
    int semester;
    float CGPA;
};
int main(){
   struct students s1;
   printf("enter the name of student:\n");
   gets(s1.name);
   printf("enter the age of student:\n");
   scanf("%d",&s1.age);
   printf("the age of %s is %d\n",s1.name,s1.age);
   union student s2;
   printf("enter the age of student:\n");
   scanf("%d",&s2.age);
   printf("enter the name of student:\n");
   scanf("%c",&s2.name);
   printf("the age of %s is %d",s2.name,s2.age);
  
   
}