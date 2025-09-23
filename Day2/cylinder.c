#include <stdio.h>

int main() {
    float radius, height, volume;
    float pi = 3.14;

    printf("Enter radius of cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of cylinder: ");
    scanf("%f", &height);

    volume = pi * radius * radius * height;

    printf("Volume of Cylinder = %.2f\n", volume);

    return 0;
}
