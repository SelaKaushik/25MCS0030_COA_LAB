#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include "colours.h"

void fn_work(float* a, float* b, float* c, int n) {
    float x, y;
    int i;

#pragma omp parallel for private(x, y) shared(a, b, c)
    for (i = 0; i < N; i++) {
        x = a[i];
        y = b[i];
        c[i] = x + y;
    }
}

// User-defined function to replace main
void fn_run_vector_addition() {
    int n = 10;
    float a[10], b[10], c[10];

    // Initialize input arrays
    for (int i = 0; i < n; i++) {
        a[i] = i * 1.0;
        b[i] = (n - i) * 1.0;
    } 

    // Call the work function
    fn_work(a, b, c, n);

    // Print the result
    fn_red();
    printf("Result of vector addition:\n");
    fn_reset();
    
    for (int i = 0; i < n; i++) {
        printf("c[%d] = %.2f\n", i, c[i]);
    }

}