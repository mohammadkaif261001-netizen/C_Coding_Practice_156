#include<stdio.h>
int main()
{
    float a , b , c , d ;
    printf("Enter first complex: ");
    scanf("%f %f", &a , &b);
    printf("Enter second complex: ");
    scanf("%f %f", &c , &d);
    printf("sum = %.2f + %.2fi" , a+c , b + d);
    return 0;

}