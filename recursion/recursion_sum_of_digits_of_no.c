/*
a 5-digit positive integer is entered through the keyboard.
Write a recursive function to calculate sum of digits of the 5-digit number.
*/
#include <stdio.h>
int sumofdigits(int); //function prototype
int main()
{
    int n;
    printf("Enter a positive integer = ");
    scanf("%d",&n);   //input from user
    int s=sumofdigits(n);
    printf("Sum of digits of %d is %d\n",n,s);
}
int sumofdigits(int n)
{   int s;
    if(n/10!=0)
        s=n%10+sumofdigits(n/10); //recursive function
    else
        return n%10;
    return s;
}