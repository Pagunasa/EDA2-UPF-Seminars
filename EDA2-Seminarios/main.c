/* 
 * File:   main.c Seminario 3
 * Author: U140172 Guillem Martínez
 *
 * Created on 20 de mayo de 2017, 11:19
 */

#include <stdio.h>
#include <stdlib.h>

int cmb_Din(int n, int k) {
    int **combNumbers, i = 0, j, col, fil;

    combNumbers = malloc(n * sizeof (int *));

    for (int i = 0; i < n; i++) {
        combNumbers[i] = malloc(k * sizeof (int *));
    }

    if (k == n || k == 0) {
        return 1;
    } else {

        for (i = 0; i < n; i++) {
            combNumbers[i][0] = 1;

        }
        for (i = 0; i < n; i++) {
            for (j = 1; j < k; j++) {
                if (i == j) {
                    combNumbers[i][j] = 1;
                } else if (j > i) {
                    combNumbers[i][j] = 0;
                }
                combNumbers[0][j] = 1;
            }
        }

        for (i = 2; i < n; i++) {
            for (j = 1; j < k; j++) {
                col = i - 1;
                fil = j - 1;
                combNumbers[i][j] = combNumbers[col][fil] + combNumbers[col][j];
            }
        }
    }
    col = i - 1;
    fil = j - 1;
    return combNumbers[col][fil];
}

int main(int argc, char** argv) {
    int result, N, K;
    
    printf("Introduce the numbers for combinatory: ");
    scanf("%i %i", &N, &K);
    
    N = N+1;
    K = K+1;
    
    result = cmb_Din(N,K);
    printf("%i", result);
    return (EXIT_SUCCESS);
}
