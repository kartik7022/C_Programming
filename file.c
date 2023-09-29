#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE  *fptr;
    fptr=fopen("text.txt","wb");
    fprintf(fptr,"%c",'m');
}
