#include <stdio.h>

int main(){
    int arr[8], sum =0;

    for (int i = 0; i < 8; i++){
        printf("Enter a number: \t");
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of the array is: %d", sum);
}