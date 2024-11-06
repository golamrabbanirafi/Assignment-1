// 12. Write a C program that demonstrates the use of single-line (//) and multi-line (/* */) comments.

#include<stdio.h>
#define PI 3.1416 //It's a Variable.
int main()
{
float radius,area;
  printf("Enter Radius: ");
  scanf("%f",&radius);
  /**
    Theory of Circle area.
    Area = PI * Radius * Radius
    PI = 3.1416
  **/
  printf("Area Of a Circle:%f\n",PI * radius * radius);
  return 0;
}
