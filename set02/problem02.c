#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the sides of the triangle:\n");
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();

    int isscalene = check_scalene(side1, side2, side3);

    output(side1, side2, side3, isscalene);

    return 0;
}

int input_side() {
    int side;
    printf("Enter side length: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && a != c && b != c) {
        return 1; 
    } else {
        return 0; 
    }
}

void output(int a, int b, int c, int isscalene) {
    printf("Triangle with sides %d, %d, %d is ", a, b, c);
    if (isscalene) {
        printf("scalene.\n");
    } else {
        printf("not scalene.\n");
    }
}
