#include<stdio.h>
float average(float fir,float sec,float thi);
void main(){
    float fir,sec,thi,avg;
    printf("the average is %f",average(fir,sec,thi));

}
float average(float fir,float sec,float thi){
    printf("enter fir\n");
    scanf("%f",&fir);
    printf("enter sec\n");
    scanf("%f",&sec);
    printf("enter thi\n");
    scanf("%f",&thi);
    return ((fir+sec+thi)/3);
}