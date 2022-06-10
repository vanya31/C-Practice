#include<stdio.h>

int main(){
    int i=10;
    int *j;
    int **k;
     j= &i;
     k=&j;
    printf("%d,%d,%d",i,j,k);
}