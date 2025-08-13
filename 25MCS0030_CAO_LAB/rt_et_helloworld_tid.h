#include "stdio.h"
#include "omp.h"

void fn_rt_tid_helloworld_srl() {
	double start = omp_get_wtime();
	printf("\n---- Runtime Execution Calculation Serial----\n");
	printf("Hello World- ");
	double end = omp_get_wtime();

	printf("Execution time of ThreadID %d: %fs\n\n",omp_get_thread_num(), end - start);
}

void fn_rt_tid_helloworld_prl() {
	omp_set_num_threads(4);
	double start = omp_get_wtime();
	printf("\n---- Runtime Execution Calculation Parallel----\n");
#pragma omp parallel
	{
		double start2 = omp_get_wtime();
		printf("Hello World- ");
		double end2 = omp_get_wtime();
		printf("Execution time of ThreadID %d: %fs\n",omp_get_thread_num(), end2 - start2);
	}
	double end = omp_get_wtime();
	printf("Execution time of all threads in total: %fs\n\n", end - start);
}


