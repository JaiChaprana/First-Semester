#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Enter third number: ");
    scanf("%d", &c);
    printf("Enter fourth number: ");
    scanf("%d", &d);
    if (a==b || b==c || c==d || d==a) {
        if (a>b && a>c && a>d) {
            printf("First number is the greatest.");
        } else if (b>a && b>c && b>d) {
            printf("Second number is the greatest.");
        } else if (c>a && c>b && c>d) {
            printf("Third number is the greatest.");
        } else {
            printf("Fourth number is the greatest.");
        }
    } else {
        printf("Valid input required!");
    }
}
