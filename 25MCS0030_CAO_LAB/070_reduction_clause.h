#include <stdio.h>
#include <omp.h>

void fn_reduction_example() {
    int N = 10;
    int sum = 0;

    printf("=== OpenMP Reduction Example ===\n");

#pragma omp parallel for reduction(+:sum)
    for (int i = 1; i <= N; i++) {
        sum += i;
        printf("Thread %d processed %d (partial sum local)\n", omp_get_thread_num(), i);
    }

    printf("\nFinal Sum (1 to %d) = %d\n", N, sum);
}
