#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d = %d + %d", num, i, num - i);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d cannot be expressed as sum of two prime numbers", num);

    return 0;
}
