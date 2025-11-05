#include<stdio.h>
#include<omp.h>

void fn_default_scheduling_dynamic() {

}

void fn_dynamic_01() {
	int n = 16;
	omp_set_num_threads(4);

	printf("Dynamic Scheduling\n");

	#pragma omp parallel for schedule(dynamic)
	for (int i = 0; i < 16; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}

	printf("---18 Iterations --- \n");

	#pragma omp parallel for schedule(dynamic)
	for (int i = 0; i < 18; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}
}

void fn_dynamic_02() {
	int n = 16;
	omp_set_num_threads(4);

	printf("\nDynamic Scheduling with chunk\n");

	#pragma omp parallel for schedule(dynamic,2)
	for (int i = 0; i < 16; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}

	printf("---18 Iterations --- \n");
	
	#pragma omp parallel for schedule(dynamic,2)
	for (int i = 0; i < 18; i++) {
		printf("Iteration %d Handled by thread %d\n", i, omp_get_thread_num());
	}
}

