#include <stdio.h>

int main() {
    int count =0, yNo = 1;
    int arr[10000];
    int num;


    // inputting numbers
    while (yNo != 0) {
        printf("Enter any number: \t");
        scanf("%d", &num);
        if (yNo!=0) {
            arr[count] = num;
            count++;
        }
        printf("Do you want to continue (0 to stop): \t");
        scanf("%d", &yNo);
    }

    for (int i =0; i < count; i++) {
        printf("%d\t", arr[i]);
    }

    // SUM OF ELEMENTS OF ARRAY
    int sum = 0, evenCount = 0, oddCount=0;

    printf("\n");

    for (int i = 0; i < count; i++) {

        sum += arr[i];

        // EVEN OR ODD NUMBER
        if (arr[i] % 2 == 0) {
            printf("%d is an even number! \n", arr[i]);

            evenCount++;
        } else {
            printf("%d is an odd number! \n", arr[i]);
            oddCount++;
        }

        // POSITIVE OR NEGATIVE NUMBER
        if (arr[i] > 0) {
            printf("%d is a positive number! \n", arr[i]);
            printf("\n");
        } else if (arr[i] < 0) {
            printf("%d is a negative number! \n", arr[i]);
            printf("\n");
        } else {
            printf("It is zero!! \n");
            printf("\n");
        }
    }

    // SUM OF ELEMENTS OF ARRAY
    printf("\n");
    printf("Sum of array: %d\t", sum);
    printf("\n");

    // REVERSE ORDER
    printf("\n");
    printf("Printing reverse order!! \n");
    for (int i = count - 1; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }

    printf("\n");
    printf("Printing one odd and one even number alternatively!");
    // 1 even and 1 odd
    int evenIndex = 0, oddIndex = 0;
    int even[evenCount], odd[oddCount];
    for (int i = 0; i < count; i++) {
        if (arr[i] % 2 == 0) {
            even[evenIndex] = arr[i];
            evenIndex++;
        } else {
            odd[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    printf("\n");


    // PRINTING ONE EVEN ONE ODD
    int newEI = 0 , newOI =0 ;
    for (int i = 0; i < count; i++) {
        if (i%2 == 0) {
            if (!even[evenIndex]) {
                printf("No even number here");
            } else {
                printf("%d\t", even[newEI++]);
            }
        } else {
            if (!odd[oddIndex]) {
                printf("No odd number here");
            } else {
                printf("%d\t", odd[newOI++]);
            }
        }
    }

}