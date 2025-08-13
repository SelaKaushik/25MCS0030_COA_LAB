#include <stdio.h>
#include "omp.h"
#define N 100

void fn_initializeArray(int a[]) {
    for (int i = 1; i <= N; i++) {
        a[i] = i;
    }
}

void fn_computeSquares_srl(int a[], int square[]) {
    for (int i = 1; i <= N; i++) {
        square[i] = a[i] * a[i];
        //printf("square of a[%d]: a[%d]^2 = %d\n", i, a[i], square[i]);
    }
}

void fn_displayResults_srl(int square[]) {
    printf("\nSquared Results:\n");
    for (int i = 1; i <= N; i++) {
        printf("square[%d] = %d\n", i, square[i]);
    }
}

int fn_num_square() {
    int a[N], square[N];
	double start = omp_get_wtime();
    fn_initializeArray(a);
    fn_computeSquares_srl(a, square);
    fn_displayResults_srl(square);
	double end = omp_get_wtime();
	double time_taken = end - start;
    double exe_time_srl = end - start;
	printf("\nTime taken for serial execution: %f sec\n\n", exe_time_srl);
    return 0;
}

