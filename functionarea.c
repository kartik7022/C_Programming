#include<stdio.h>
float areaofrect(float a,float b);
float areaofsquare(float c);
float areaofcircle(float rad);
int main(){
    float a,b,c,rad;
    printf("enter the value of a\n");
    scanf("%f",&a);
    printf("enter the value of b\n");
    scanf("%f",&b);
    printf("enter the value of c\n");
    scanf("%f",&c);
    printf("enter the value of rad\n");
    scanf("%f",&rad);
    float A=areaofrect(a,b);
    printf("the area of rectangle is:%f\n",A);
    float B=areaofsquare(c);
    printf("the area of square is : %f\n",B);
    float C=areaofcircle(rad);
    printf("the area of circle is:%f\n",C);
}
float areaofrect(float a,float b){
    return a*b;
}
float areaofsquare(float c){
    return c*c;
}
float areaofcircle(float rad){
    return 3.142*rad*rad;
}