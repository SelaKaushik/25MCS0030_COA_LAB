#include "stdio.h"
#include "omp.h"

void fn_ret_et_helloworld_srl() {
	double start = omp_get_wtime();
	printf("\n---- Runtime Execution Calculation Serial----\n");
	printf("Hello World ");
	double end = omp_get_wtime();

	printf("Execution of serial program: %fs\n\n", end - start);
}

void fn_ret_et_helloworld_prl() {
	double start = omp_get_wtime();
	printf("\n---- Runtime Execution Calculation Parallel----\n");
	#pragma omp parallel
	{
		printf("Hello World! \n");
	}
	double end = omp_get_wtime();
	printf("Execution of parallel program: %fs\n\n", end - start);
}

