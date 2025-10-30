#include <stdio.h>

int main() {
    int arr[100];
    int userYno, count =0;

    do {
        printf("Enter 0 to stop: ");
        scanf("%d",&userYno);
        if (userYno==0) {
            break;
        }
        printf("Enter a value: ");
        scanf("%d",&arr[count]);
        count++;
    }
    while (1);
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
    int start = 0, end = count-1;
    while (start <= end) {
       int temp = arr[start];
       arr[start] = arr[end];
        arr[end] = temp;
       end--;
       start++;
   }


    printf("\n");

    printf("Reversed values are: \n");
    for (int i = 0; i < count; i++) {
        printf("%d\t", arr[i]);
    }
}