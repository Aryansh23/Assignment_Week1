#include<stdio.h>
//Input radius,find diameter,circumference,area.
int main()
{
    float radius;
    float pi= 3.14;
    printf("Enter the radius:\n");
    scanf("%f",&radius);
    printf("Diameter of circle:%f \n",2*radius);
    printf("Circumference of circle:%f \n",2*pi*radius);
    printf("Area of circle:%f \n",pi*radius*radius);
    return 0;
}