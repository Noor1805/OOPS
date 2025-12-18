#include <stdio.h>

int main() {
    float r = 5, circle, tri, rect;
    float b = 4, h = 3, l = 6, w = 2;

    circle = 3.14 * r * r;
    tri = 0.5 * b * h;
    rect = l * w;

    printf("Circle Area = %.2f\n", circle);
    printf("Triangle Area = %.2f\n", tri);
    printf("Rectangle Area = %.2f\n", rect);

    return 0;
}
