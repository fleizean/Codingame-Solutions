#include <stdio.h>

int main()
{
    int height;
    scanf("%d", &height);
    int width;
    scanf("%d", &width);
    int sayi = width;
    int a,s = 0;
    while(height > 0)
    {
        int s = width;
        while(width > 0)
        {
            printf("O");
            width--;
        }
        printf("\n");
        width = s;
        height--;
    }
}