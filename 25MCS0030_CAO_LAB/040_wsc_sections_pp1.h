#include "stdio.h"
#include "omp.h"
#include "040_calculator_functions_pp1.h"

void fn_wsc_sections_pp1_srl() {
	int a = 5, b = 3;
	int sum, difference;
	double start = omp_get_wtime();
	sum = fn_calculator_add(a,b);
	printf("Addition: %d + %d = %d by ThreadID %d\n", a, b, sum, omp_get_thread_num());
	
	difference = fn_calculator_sub(a,b);
	printf("Difference: %d - %d = %d by ThreadID %d\n", a, b, difference, omp_get_thread_num());

	double end = omp_get_wtime();

	printf("Execution time of serial: %f sec", end - start);
	printf("\n\n");
}

void fn_wsc_sections_pp1_prl() {
	int a = 5, b = 3;
	int sum, difference;
	double start = omp_get_wtime();
#pragma omp parallel sections
	{
#pragma omp section
		{
			sum = fn_calculator_add(a, b);
			printf("Addition: %d + %d = %d by ThreadID %d\n", a, b, sum, omp_get_thread_num());
		}
#pragma omp section
		{   
			difference = fn_calculator_sub(a, b);
			printf("Difference: %d - %d = %d by ThreadID %d\n", a, b, difference, omp_get_thread_num());
		}
	}
	double end = omp_get_wtime();
	printf("Execution time of parallel: %f sec", end - start);
}

