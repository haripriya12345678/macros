#include<stdio.h>
#define cube(x1) (x1*x1*x1)
#define cube1(x2) ((x2)*(x2)*(x2))
int main(void)
{
    printf("%d\n",cube(2+4));
    int i=1;
    while(i<=8)
    printf("%d\n",cube1(i++));
return 0;
}