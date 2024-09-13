/*
Write a program to print the prime factors of a number using concepts of recursive function.
*/
#include <stdio.h>
void primefac(int,int);
int main()
{
    int n;
    printf("Enter a positive integer = ");
    scanf("%d",&n);
    printf("the prime factors of %d are :\n",n);
    primefac(n,2);
    printf("\n");
}
void primefac(int n,int i)
{
    if (i<=n)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
            n=n/i;
        }
        else
            i++;
        primefac(n,i);
    }
    else
    return;
}
