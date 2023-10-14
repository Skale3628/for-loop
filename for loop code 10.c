// program to print the product of first 10 odd numbers

#include <stdio.h>

int main() {
     
    int product = 1;
    for (int i =1;i<=10;i++) {
        product *= i; //product=product*i
    }
    printf("%d",product);  
}