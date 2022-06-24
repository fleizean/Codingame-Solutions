#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int isdiff(char *str1, char *str2)
{
    int i = 0, count = 0;
    int i2 = strlen(str2) - 1;
	while (str1[i])
    {
        if(str1[i] != str2[i2])
            count++;
        i++;
        i2--;
    }
    return(count);
}
int main()
{
    char line_1[201];
    scanf("%[^\n]", line_1); fgetc(stdin);
    char line_2[201];
    scanf("%[^\n]", line_2);
    printf("%d",isdiff(line_1,line_2));

    return 0;
}