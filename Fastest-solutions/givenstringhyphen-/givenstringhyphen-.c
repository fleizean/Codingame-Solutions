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
    char message[100];
    scanf("%[^\n]", message);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    char tmp1, tmp2;
    int i = strlen(message);
    int b = 0;
    while(message[b])
    {
        if(message[0] >= 'A' && message[b] <='Z')
        {

        }
        else
        {
            tmp1 = message[b];
            break;
        }
        b++;
    }
    i--;
    while(message[i])
    {
        if((message[i] >= 'A' && message[i] <='Z') || (message[i] >= '0' && message[i] <= '9'))
        {
        }
        else
        {
            tmp2 = message[i];
            break;
        }
        i--;
    }
    printf("%c-%c",tmp1,tmp2);

    return 0;
}