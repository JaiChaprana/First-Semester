#include <stdio.h>

int main() {
    float principle,time;
    printf("enter the principle :");
    scanf("%f", &principle);
    printf("enter the time:");
    scanf("%d", &time);
    if (principle == 0 || time == 0) {
        printf("Invalid input!");
    } else {
        const float rate = 4.0;
        const float si =( principle*time*rate)/100;
        printf("%f", si);
    }
    return 0;
}
