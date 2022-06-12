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
    char DNA[1025];
    scanf("%s", DNA);
    int i = 0;
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    while(DNA[i])
    {
        if(DNA[i] == 'A')
        {
            printf("T");
        }
        else if(DNA[i] == 'C')
        {
            printf("G");
        }
        else if(DNA[i] == 'G')
        {
            printf("C");
        }
        else if(DNA[i] == 'T')
        {
            printf("A");
        }
        i++;
    }

    return 0;
}