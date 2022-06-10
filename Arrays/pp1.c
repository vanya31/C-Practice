#include <stdio.h>

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 2, 4, 6, 8};
    int *ptr = &arr[0];

    ptr = ptr + 2;
    printf("%d", *ptr);
}