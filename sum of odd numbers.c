//program to print sum of first 10 odd numbers 

#include<stdio.h>
void main(){
    int sum = 0 ;
    for(int i=1;i<=20;i=i+2){
        sum+=i;
    }
    printf("%d",sum);
}