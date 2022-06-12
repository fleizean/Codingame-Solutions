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
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        int n;
        scanf("%d", &n);
        if(n % 2 == 0)
        {
            printf("[ ] %d\n",n);
        }
        else
        {
            printf("[x] %d\n",n);
        }
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    

    return 0;
}