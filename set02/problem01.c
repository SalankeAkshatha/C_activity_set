#include <stdio.h>

void input(float *base, float *height) {
    printf("Enter the base of the triangle: ");
    scanf("%f", base);

    printf("Enter the height of the triangle: ");
    scanf("%f", height);
}

void find_area(float base, float height, float *area) {
    *area = 0.5 * base * height;
}

void output(float base, float height, float area) {
    printf("Base: %.2f\n", base);
    printf("Height: %.2f\n", height);
    printf("Area: %.2f\n", area);
}

int main() {
    float base, height, area;

    // Input
    input(&base, &height);

    // Calculate area
    find_area(base, height, &area);

    // Output
    output(base, height, area);

    return 0;
}
