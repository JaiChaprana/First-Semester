#include <stdio.h>

int main() {
    int arr1[100],arr2[100];
    int userYno,count=0;

    do {
        printf("Enter an element in array 1: \n");
        scanf("%d", &arr1[count]);
        printf("Enter an element in array 2: \n");
        scanf("%d", &arr2[count]);
        count++;
        printf("Enter 1 to continue??\n");
        scanf("%d", &userYno);
    } while(userYno==1);

    int sum=0;
    for(int i=0;i<count;i++) {
        sum+= arr1[i] + arr2[i];
    }
printf("The sum = %d", sum);
}