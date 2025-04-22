#include<stdio.h>
#define value  5
int main()
{
    #if  value>=10
           printf("Given value is  positive value");
    #elif  value<=0
           printf("Given value is negative value");
    #elif  value==0
            printf("Given is zero value");
    #else
          printf("Given value is not found");
    #endif
          printf("It is completed");
        
    return 0;

}