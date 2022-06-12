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
    char call_1[9];
    char call_2[9];
    scanf("%s%s", call_1, call_2);
    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");
    int i = 0;
    while (i == 0) {
      if (call_1[i] == 'R') {
        if (call_2[i] == 'P') {
          printf("PLAYER2");
          i = 1;
        } else if (call_2[i] == 'S') {
          printf("PLAYER1");
          i = 1;
        } else {
          printf("DRAW");
          i = 1;
        }
      } else if (call_1[i] == 'P') {
        if (call_2[i] == 'R') {
          printf("PLAYER1");
          i = 1;
        } else if (call_2[i] == 'S') {
          printf("PLAYER2");
          i = 1;
        } else {
          printf("DRAW");
          i = 1;
        }
      } else if (call_1[i] == 'S') {
        if (call_2[i] == 'R') {
          printf("PLAYER2");
          i = 1;
        } else if (call_2[i] == 'P') {
          printf("PLAYER1");
          i = 1;
        } else {
          printf("DRAW");
          i = 1;
        }
      }
    }


    return 0;
}