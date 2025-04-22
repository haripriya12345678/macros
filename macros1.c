#include<stdio.h>
#define reverse_value 1234
int main(void)
{
    int remainder;int result = 0;
    int original=reverse_value;
    while(original!=0)
    {
        remainder=original%10;
        result=result*10+remainder;
        original/=10;

        
    }
    if(result!=0)
    {
        printf("%d",result);
    }
    return 0;
}