//program to print product of first 10 odd numbers

#include<stdio.h>
void main(){
    int product=1;
    for(int i=1;i<=20;i+=2){
        product=i*product;
    }
    printf("%d",product);
}