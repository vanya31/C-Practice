#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter n to print the sum of first n numbers:");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}

int sum(int n){
    if (n!=0)
    return n+sum(n-1);
    else
    return n;
}