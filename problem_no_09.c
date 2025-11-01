#include<stdio.h>
int main()
{
    float fahrenheit , celcius;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius=(fahrenheit - 32) * 5/9;
    printf("Temperature in celcius: %.2f", celcius);
    return 0;
}