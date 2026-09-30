#include <stdio.h>

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("Two numbers after swapping are: %d, %d", a, b);

    return 0;
}

/*#include <math.h>

#define pi 3.14

float hui(int r) {
    float area;
    area = pi * pow(r, 2);
    return area;
}

int main() {
    int r;

    printf("Enter radius: ");
    scanf("%d", &r);

    printf("Area = %.2f", hui(r));

    return 0;
}*/

