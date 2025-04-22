#include<stdio.h>
#define print_fib(n) print_fib(n)
void print_fib(int n)
{
    int a=0,b=1,i;
    printf("fibonacci series up to %d:\n", n);
    for(i=0;i<n;i++)
    {
        printf("%d",a);
        int temp=a;
        a=b;
        b=temp+b;

    }
    printf("\n");
}
int main()
{
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    print_fib(a);
    return 0;
}