#include<stdio.h>
//enter 2 no.s and perform arithmetic operations 
int main()
{
    float a,b;
    printf("Enter the number a = ");
    scanf("%f",&a);
    printf("Enter the number b = ");
    scanf("%f",&b);
    switch (a && b)
    {
    case 1:
    printf(" %f + %f=%f\n",a, b, a + b);
    case 2:
    printf(" %f - %f=%f\n",a, b, a - b);
    case 3:
    printf(" %f * %f=%f\n",a, b, a * b);
    case 4:
    printf(" %f / %f=%f\n",a, b, a / b);
    }
    return(0);
}