#include <stdio.h>

int main()
{
    int n, a, b, result;
    printf("Enter the number:- ");
    scanf("%d", &n);

    a = 0;
    b = 1;

    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        result = a + b;
        a = b;
        b = result;
    }
}