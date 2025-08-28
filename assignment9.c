#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the number 1: ");
    scanf("%d", &num1);
    printf("Enter the number 2: ");
    scanf("%d", &num2);

    for(int i=num1; i<=num2; i++) {
        if (i%2!=0) {
            printf("%d \n ",i);
        }
    }

    return 0;
}
