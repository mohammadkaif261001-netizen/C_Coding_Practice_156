#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], result[101];
    int i, j, k, sum, carry = 0;

    printf("Enter first binary string: ");
    scanf("%s", a);
    printf("Enter second binary string: ");
    scanf("%s", b);

    int n1 = strlen(a);
    int n2 = strlen(b);
    i = n1 - 1;
    j = n2 - 1;
    k = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if (i >= 0)
            sum += a[i--] - '0';
        if (j >= 0)
            sum += b[j--] - '0';
        result[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

    printf("Sum of binary strings: ");
    for (i = k - 1; i >= 0; i--)
        printf("%c", result[i]);

    return 0;
}
