#include <stdio.h>

int putnbr(int n)
{
    int product = 1;
 
    while (n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }
 
    return product;
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d",putnbr(n));
}