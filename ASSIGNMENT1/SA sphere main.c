#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float radius, area;
    float pi = 3.142;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    area = 4 * pi * radius * radius;

    printf("The surface area of the sphere is: %.2f", area);

    return 0;
}

