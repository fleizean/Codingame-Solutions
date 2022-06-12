#include <stdio.h>

int main()
{
    int time;
    scanf("%d", &time);
    int speed;
    scanf("%d", &speed);
    int rslt;
    rslt = time * speed;
    printf("%d",rslt / 60);
}