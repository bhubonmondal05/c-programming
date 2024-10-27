// Write a C program to calculate the sum of the first 20 natural numbers using a recursive function.
#include <stdio.h>

int sumOf20NaturalNums(int n)
{
    if (n > 0)
    {
        return n + sumOf20NaturalNums(n - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result;
    result = sumOf20NaturalNums(20);
    printf("sum of first 20 natural nums = %d", result);
}