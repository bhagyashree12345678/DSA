#include <stdio.h>

int isPrime(int n)
{
    int count = 0;
    if(n==1 && n==0){
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}

int main()
{
    int n1, n2,count=0;
    printf("enter 1st number: ");
    scanf("%d", &n1);

    printf("enter 2nd number: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++)
    {

        if(isPrime(i)==1){
            count++;
        }
        
    }
    return count;
}
