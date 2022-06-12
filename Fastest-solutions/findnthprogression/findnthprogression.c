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
    int a;
    scanf("%d", &a);
    int d;
    scanf("%d", &d);
    int n;
    scanf("%d", &n);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int rslt = (a + (n - 1) * d);
    printf("%d",rslt);
}