#include <stdio.h>

int reverse(int num)
{
    int res = 0;

    while (num > 0)
    {

        res = res * 10 + num % 10;
        num = num / 10;
    }
    return res;
}

int main()
{
    int num = 123;

    printf("the reverse digit is: %d", reverse(num));
    getchar();

    return 0;
}