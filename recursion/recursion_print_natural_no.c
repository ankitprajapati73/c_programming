/*
Write a program to print first 50 natural numbers using recursion.
*/
#include <stdio.h>
void printnatno(int,int);
int main()
{
    int n;
    printf("enter the no of natural numbers to print = ");
    scanf("%d",&n);

    printf("First %d natural numbers are :\n",n);;
    printnatno(1,n);
    printf("\n");
}
void printnatno(int i, int n)
{
    if(i<=n)
    {
        printf("%d\t",i);
        i++;
        printnatno(i,n);
    }
    else
    return;
}