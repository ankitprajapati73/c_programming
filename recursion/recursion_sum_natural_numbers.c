/*
Program to calculate the sum of n natural numbers using recursive function.
*/
#include <stdio.h>
int sumnatno(int);
int main()
{
    int n;
    printf("enter the last natural no upto which the sum has to be calculated = ");
    scanf("%d",&n);
    printf("Sum of natural no upto %d is %d\n",n,sumnatno(n));
}
int sumnatno(int n)
{   
    int s;
    if(n>=1)
    {
        s=n+sumnatno(n-1);
    }
    else
    return s;
}