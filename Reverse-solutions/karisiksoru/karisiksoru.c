#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int z = n;
    int org = 1;
    int p = n;
    int c = org;
    while(n > 0)
    {
        z = p;
        while(z > 0)
        {
            printf("%d",org);
            org += p;
            z--;
            if(z != 0)
                printf(" ");
        }
        printf("\n");
        c++;
        org = c;
        n--;
    }
}