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
    char S[257];
    scanf("%[^\n]", S);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int i = 0, rslt = 0;
    while(S[i])
    {
        if(S[i] >= 'a' && S[i] <= 'z')
            rslt++;
        i++;
    }
    printf("%d",rslt);

    return 0;
}
