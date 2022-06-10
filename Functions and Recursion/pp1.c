#include<stdio.h>

int avg(int num1,int num2,int num3);

int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter 3 numbers to find their average:");
    scanf("%d %d %d",&num1,&num2,&num3);
    avg(num1,num2,num3);
    return 0;
}

int avg(int num1, int num2,int num3){
    int average;
    average=(num1+num2+num3)/3;
    printf("%d",average);
}