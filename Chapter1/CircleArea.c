// program to find the area of circle such that the program should be user interactive

#include<stdio.h>
#define pi 3.14
int main()
{
    float area =0, radius;

    printf("enter the radius of circle: ");
    scanf("%f",&radius);

    //computing  the area
      area = pi*(radius*radius);

      printf("\nArea of circle = %f",area);

      return 0;
}