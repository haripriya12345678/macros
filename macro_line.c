#include<stdio.h>
int main(void)
{
    printf("C in depth\n");
    printf("%d  %s\n",__LINE__,__FILE__);
    #line 25 "myprogram.c"
    printf("%d   %s\n",__LINE__,__FILE__);
    return 0;
}