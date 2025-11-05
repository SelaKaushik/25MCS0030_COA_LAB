#include <stdio.h>
#include <omp.h>

void fn_critical_section_example() {
    int sum = 0;   // Shared variable
    int N = 10;

    printf("=== OpenMP Critical Section Example ===\n");

#pragma omp parallel for
    for (int i = 1; i <= N; i++) {
        // Unsafe update could cause a race condition without 'critical'
#pragma omp critical
        {
            sum += i;
            printf("Thread %d added %d -> Current sum = %d\n", omp_get_thread_num(), i, sum);
        }
    }

    printf("\nFinal Sum (1 to %d) = %d\n", N, sum);
}
