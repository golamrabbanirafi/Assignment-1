/**10. Design a C program that takes an input temperature in Celsius using the scanf function and converts
it to Fahrenheit. Use the formula:
Fahrenheit = (Celsius × 9/5) + 32
**/
#include<stdio.h>
int main()
{
    int c,f;
    printf("Enter Celsius Temperature: ");
    scanf("%d",&c );
    f=(c*9/5) + 32;
    printf("Converted Fahrenheit Temperature: %d\n",f);
    return 0;
}
