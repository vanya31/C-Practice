#include<stdio.h>

void increase(int*n);

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    increase(&n);
    printf("your number x 10: %d",n);
}

void increase(int*n){
    *n= *n * 10;
}