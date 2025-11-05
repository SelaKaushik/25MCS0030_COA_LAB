#include<stdio.h>
#include<omp.h>

void fn_default_scheduling_static() {

}

void fn_static_01() {
	int n = 16;
	omp_set_num_threads(4);

	printf("Static Scheduling\n");

	#pragma omp parallel for schedule(static)
	for (int i = 0; i < 16; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}

	printf("---18 Iterations --- \n");

	#pragma omp parallel for schedule(static)
	for (int i = 0; i < 18; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}
}

void fn_static_02() {
	int n = 16;
	omp_set_num_threads(4);

	printf("\nStatic Scheduling with chunk\n");

	#pragma omp parallel for schedule(static,2)
	for (int i = 0; i < 16; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}
	
	printf("---18 Iterations --- \n");
	#pragma omp parallel for schedule(static,2)
	for (int i = 0; i < 18; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}
}

