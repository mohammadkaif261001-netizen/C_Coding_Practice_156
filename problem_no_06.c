#include<stdio.h>
int main()
{
    float num1 , num2, product;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1,&num2);
    product= num1 * num2;
    printf("Product is %.2f.\n", product);
    return 0;
}