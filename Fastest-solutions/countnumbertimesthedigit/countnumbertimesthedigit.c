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
    char tmp;
    char str[256];
    scanf("%[^\n]", str);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int c = 0;
    int i = 0;
    int len = strlen(str);
    while(len != 0)
    {
        if(str[i] != str[i + 1])
            c++;
        len--;
        i++;
    }
    printf("%d",c-1);

    return 0;
}
