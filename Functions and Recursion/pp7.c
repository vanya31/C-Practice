#include<stdio.h>

void pattern(int n);

int main(){
    int n;
    printf("Enter number of rows in thr triangle:");
    scanf("%d",&n);
    pattern(n);
}

void pattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=(2*i-1);j++){
            printf("*");
        };
    };

}