#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool digit(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            return true;
        i++;
    }
    return false;
}
bool lowercase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            return true;
        i++;
    }
    return false;
}
bool uppercase(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            return true;
        i++;
    }
    return false;
}
int main()
{
    char str[101];
    scanf("%[^\n]", str);

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int len = strlen(str);
    int i = 0;
    if(len >= 8)
    {
        while(str[i])
        {
            if(digit(str) && lowercase(str) && uppercase(str))
            {
                printf("true");
                break;
            }
            else
            {
                printf("false");
                break;
            }
        }
    }
    else
    {
        printf("false");
    }

    return 0;
}