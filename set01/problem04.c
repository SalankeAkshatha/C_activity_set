#include <stdio.h>
int input();
void add(int a,int b,int*sum);
void output(int a,int b,int sum);

int main()
{
    int a,b,result;
    a=input();
    b=input();
    add(a,b,&result);
    output(a,b,result);
    return 0;
}
int input()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    return x;
}
void add(int a,int b,int*sum)
{
    *sum=a+b;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d +%d is %d\n",a,b,sum);
}