#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int binaryfind(int n)
{
    int c, k,rslt = 0,b = 0;
    for (c = 31; c >= 0; c--)
    {
        k = n >> c;

        if (k & 1)
            rslt++;
        else
        {
            b++;
        }
    }
    return(rslt);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d",binaryfind(x));
    return 0;
}
