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
    int distance;
    scanf("%d", &distance);
    int time;
    scanf("%d", &time);
    int velocity;
    scanf("%d", &velocity);
    int fuel;
    scanf("%d", &fuel);
    int fuel_consumption;
    scanf("%d", &fuel_consumption);
    //codes here
    if((velocity * time < distance) && (fuel * fuel_consumption < distance))
        printf("Failure, Not enough time");
    else if(velocity * time < distance)
        printf("Failure, Not enough time");
    else if(fuel * fuel_consumption < distance)
        printf("Failure, Not enough fuel");
    else
        printf("Welcome to Mars");
    return 0;
}
