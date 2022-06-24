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
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    int c;
    scanf("%d", &c);
    int d;
    scanf("%d", &d);
    int x = c;

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n");

	for(int i = 1; i <= d; i++) {
		while(c > 0) {
			printf("%d", a);
            a+=b;
			c--;
            if(c != 0)
                printf(" ");
		}
		c = x;
		printf("\n");
	}

    return 0;
}