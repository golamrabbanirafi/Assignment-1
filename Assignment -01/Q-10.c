/*****
Develop a C program that takes two characters as input from the user and displays both characters
along with their respective ASCII values. Use escape sequences to format the output.
Example Output:
If the user enters the characters A and B, the output will be:
You entered the characters: 'A' and 'B'
The ASCII value of 'A' is: 65
The ASCII value of 'B' is: 66
*****/
#include<stdio.h>
int main()
{
    char c1,c2;
    printf("Enter Two Characters: ");
    scanf("%c %c", &c1, &c2);
    printf("You Entered the Characters: '%c' and '%c'\n",c1,c2);
    printf("The ASCII Value of '%c' is : %d\n",c1, c1);
    printf("The ASCII value of '%c' is :%d\n",c2, c2);

    return 0;
}




}

