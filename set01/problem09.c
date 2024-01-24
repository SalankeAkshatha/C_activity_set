#include <stdio.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main() 
{
    float number, sqrt_result;

    number = input();
    sqrt_result = square_root(number); 
    output(number, sqrt_result); 
    return 0;
}
float input() 
{
    float num;
    printf("Enter number: ");
    scanf("%f", &num);
    return num;
}

float square_root(float n)
 {
    float x = n;
    float y = 1;
    float epsilon = 0.000001; 

    while (x - y > epsilon) 
    {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}
void output(float n, float sqrroot) 
{
    printf("\nSquare root of %.1f is %.1f\n", n, sqrroot);
}

