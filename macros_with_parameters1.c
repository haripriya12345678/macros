#include<stdio.h>
#define mul(n,x) ((n)*(x))
#define div(a,b) ((a)/(b))
int main()
{
    int i;
    int j;
    for(i=1; i<=10;i++)
    {
        printf("multiplication table for %d:\n",i);
    for(j=1;j<=10;j++)
    {
    printf(" %d * %d=%d\n",i,j,mul(i,j));
    }
    printf("\n");
}
for(i=1; i<=10;i++)
{
    printf("multiplication table for %d:\n",i);
for(j=1;j<=10;j++)
{
printf(" %d / %d=%d\n",i,j,div(i,j));
}
printf("\n");
}
    return 0;
}