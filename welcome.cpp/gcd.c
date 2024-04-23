#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a,b;

    printf("enter num1:-");
    scanf("%d",&a);

    printf("enter num2:- ");
    scanf("%d",&b);


    int res = gcd(a, b);
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));

    return 0;
}