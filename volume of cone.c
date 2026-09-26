#include <stdio.h>
#define pi 3.14

int main()
{
    int height;
    int radius;

    printf("give your height of cone: ");
    scanf("%d", &height);

    printf("give radius of cone: ");
    scanf("%d", &radius);

    printf("volume of cone is %f", (1.0/3.0) * pi * radius * radius * height);

    return 0;
}