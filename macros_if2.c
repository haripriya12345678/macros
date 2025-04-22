#include<stdio.h>
#define A_per 95
#define B_per 80
#define C_per 70
#define D_per 50
int main()
{
    float s1,s2,s3,s4,total_marks,total_per;
    char grade;
    printf("Enter matks of 4 subjects:");
    scanf("%f %f %f %f",&s1,&s2,&s3,&s4);
    total_marks=s1+s2+s3+s4;
    total_per=total_marks/4;
    #if total_per>=A_per
    {
             grade='A';
    }
    #elif total_per>=B_per
    {
          grade='B';
    }
    #elif total_per>=C_Per
    {
           grade='C';
    }
    #elif total_per>=D_per
    {
           grade='D';
    }
    #else
    {
           grade='E';
    }
    #endif
    {
          printf("Conditions are not stasify");
    }
    printf("%total marks : %.2f\n",total_marks);
    printf("percentage :%.2f\n",total_per);
    printf("Grade :%c\n",grade);

    return 0;       
}