#include <stdio.h>

int main() {
    int vote;

    printf("Enter vote (1,2 or 3): ");
    scanf("%d", &vote);
    switch (vote) {
        case 1:
            printf("First candidate won!");
            break;
            case 2:
            printf("Second candidate won!");
            break;
            case 3:
            printf("Third candidate won!");
            break;
        default:
            printf("Invalid vote!");
    }
}