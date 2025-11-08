#include <stdio.h>

int main()
{
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;
    long long sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum += t1;

        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("Sum of Fibonacci numbers at even indexes = %lld", sum);

    return 0;
}
