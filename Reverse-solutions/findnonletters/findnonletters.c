#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
bool esitse(char s)
{
    if((s == 'a' || s == 'A') || (s == 'e' || s == 'E') || (s == 'i' || s == 'I') || (s == 'O' || s == 'o')|| (s == 'U' || s == 'u'))
    {
        return true;
    }
    return false;
}
int main()
{
    char s[257];
    scanf("%[^\n]", s);
    int i = 0;
    while(s[i])
    {
        if(!esitse(s[i]))
            printf("%c",s[i]);
        i++;
    }
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

    

    return 0;
}