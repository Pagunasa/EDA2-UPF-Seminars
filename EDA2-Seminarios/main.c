/* 
 * File:   main.c Seminario 3
 * Author: U140172 Guillem Martínez
 *
 * Created on 20 de mayo de 2017, 11:19
 */

#include <stdio.h>
#include <stdlib.h>

int cmb_Din(int n, int k) {
    int **combNumbers, i = 0, j;

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

        for (i = 1; i < n; i++) {
            for (j = 1; j < k; j++) {
                if (i == j) {
                    combNumbers[i][j] = 1;
                }
            }
        }

        for (i = 1; i < n; i++) {
            for (j = 1; j < k; j++) {
                combNumbers[i][j] = combNumbers[i - 1][j - 1] + combNumbers[i - 1][j];
            }
        }
    }
    return combNumbers[n-1][k-1];
}

int main(int argc, char** argv) {
    int result;
    result = cmb_Din(3, 4);
    printf("%i", result);
    return (EXIT_SUCCESS);
}
