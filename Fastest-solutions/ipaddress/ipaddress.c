#include <stdio.h>

int main()
{
    char ip[201];
    scanf("%[^\n]", ip);
    int i = 0;
    int rslt = 0;
    int c = 0;
    while(ip[i])
    {
        if(ip[i] >= '1' && ip[i] <= '9')
        {
            c = ip[i] - '0';
            rslt += c;
        }
        i++;
    }
    printf("%d",rslt*(ip[0] - '0'));
}