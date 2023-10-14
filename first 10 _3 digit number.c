// program to print first 10 3 digit numbers

#include<stdio.h>
void main(){
    int x=0;
    for(int i=100;i<1000 && x<10;i++){
        printf("%d ",i);
        x++;
    }
}