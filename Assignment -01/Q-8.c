/*****9. Write a C program that takes two floating-point numbers as inputs using the scanf function and
calculates their product.
*****/

#include<Stdio.h>
int main()
{
    float y,z;
    printf("Enter Two Floating Values: ");
    scanf("%f %f",&y,&z);
    printf("Product Between Y & Z: %f\n",y*z);
    return 0;
}
