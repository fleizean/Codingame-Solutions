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
    int sum, x, mod;
    int M;
    scanf("%d", &M);
    int N;
    scanf("%d", &N);
    // Code Here!
    for (int i = 0; i < N; i++) {
        int E;
        scanf("%d", &E);
        sum += E % M;
    }
    mod = sum % x;
    printf("%d",mod);
    // Code Here!
    return 0;
}