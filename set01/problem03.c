#include <stdio.h>
int input();
int add(int a,int b);
void output(int a,int b,int sum);

int main()
{
    int a,b,sum;
    a=input();
    b=input();
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
int input()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return x;
}
int add(int a,int b)
{
    return a+b;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d + %d is %d\n",a,b,sum);
}