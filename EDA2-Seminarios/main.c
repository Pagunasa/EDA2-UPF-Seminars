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

    *combNumbers = (int*) malloc(n * sizeof (int));
    for (i == 0; i < n; i++) {
        (*combNumbers)[i] = (int*) malloc(k * sizeof (int));
    }
    
    if (k == n || k == 0) {
        return 1;
    } else {
        i = 0;
        j = 0;
        
        for (i == 0; i < n; i++) {
            for (j == 0; j < k; j++) {
                combNumbers[n][k] = combNumbers[n-1][k-1] + combNumbers[n-1][k];
            }
        }
    }

}

int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}
