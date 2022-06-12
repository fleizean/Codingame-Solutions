#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    scanf("%d%d%d", &a, &b, &c);
    if(a * b > a * c && a * b > b * c)
    {
        printf("%d",a*b);
    }
    else if(a * c > a * b&& a * c > b * c)
    {
        printf("%d", a*c);
    }
    else
    {
        printf("%d",b*c);
    }
}