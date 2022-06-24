#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int d;
    scanf("%d", &d);
    int g;
    int e;
    int a;
    scanf("%d%d%d", &g, &e, &a);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int rslt = g;
    while(0 < d)
    {
        rslt -= e;
        rslt += a;
        d--;
    }
    if(rslt < 0)
        printf("Dead");
    else
        printf("%d",rslt);

    return 0;
}