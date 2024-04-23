#include <stdio.h>

int main()
{
    int n, rem, result = 0, q;
    printf("enter the number:- ");
    scanf("%d", &n);

    q = n;
    while (q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q / 10;
    }

    if (result == n)
    {
        printf("IT'S A PALINDROME.");
    }
    else
    {
        printf("IT'S not A PALINDROME.");
    }
}

