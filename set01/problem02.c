//2. Write a C program to add two numbers.
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter one number:");
    scanf("%d",&a);
    printf("Enter one number:");
    scanf("%d",&b);
    c=a+b;
    printf("The sum of %d %d is %d \n",a,b,c);
    return 0;
}
