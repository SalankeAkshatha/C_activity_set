#include <stdio.h>

int input() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int find_gcd(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

void output(int a, int b, int gcd) {
    printf("The GCD of %d and %d is: %d\n", a, b, gcd);
}

int main() {
    int num1, num2, gcd;
    
    num1 = input();
    num2 = input();
    
    gcd = find_gcd(num1, num2);
    
    output(num1, num2, gcd);
    
    return 0;
}
