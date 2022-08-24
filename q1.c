#include<stdio.h>
//Write a program in C to print first 50 natural numbers using recursion

int naturalnumb(int);

int main () {
    int n =1;
    printf("The Natural number are :");
    naturalnumb(n);
     


}

int naturalnumb(int n) {
    if(n<=50){
        printf("%d\n" , n);
        return naturalnumb(n+1);
    }

    }