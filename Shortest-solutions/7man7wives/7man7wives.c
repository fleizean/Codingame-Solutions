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
    int x,c,rslt;
    scanf("%d", &x);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    // Code Here!
    c = x + 1;
    rslt = (c * x) + 1;
    rslt = rslt * x;
    printf("%d",rslt);
    // Code Here!
    return 0;
}