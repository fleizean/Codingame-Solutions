#include <stdio.h>

int main()
{
    char str[1002];
    scanf("%s", str);
    int i = 0;
    int a = 0;
    int c = 0;
    int g = 0;
    int t = 0;
    while(str[i])
    {
        if(str[i] == 'A')
            a++;
        else if(str[i] == 'C')
            c++;
        else if(str[i] == 'T')
            t++;
        else if(str[i] == 'G')
            g++;
        i++;
    }
    printf("%d %d %d %d",a,c,g,t);
}