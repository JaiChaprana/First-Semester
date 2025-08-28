#include <stdio.h>

int main() {
    int sum=0,count = 0;

    for (int i = 10; i <= 70; i++) {
        if (count !=12) {
            if (i%2!=0) {
                sum+=i;
                count++;
            }
        }
    }
    printf("The sum is: %d",sum);
}