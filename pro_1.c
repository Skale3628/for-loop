//program to print first 10 alphabets

#include<stdio.h>
void main(){
    char ch='A';
    for(int i=1;i<=10;i++){
        printf("%c ",ch++);
    }
}