#include <stdio.h>

int main() {
    int arr1[7] = {1,2,3,4,5,6,7};

    int copyArr[7];

    for (int i = 0; i < 7; i++) {
        copyArr[i] = arr1[i];
    }
    for (int i = 0; i < 7; i++) {
        printf("%d\t", copyArr[i]);
    }
}