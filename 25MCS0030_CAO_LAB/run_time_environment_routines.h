#include "stdio.h"
#include "omp.h"

void fn_rter_omp_get_num_threads() {
	int num_threads = omp_get_num_threads();
	printf("Number of threads: %d\n", num_threads);
}

void fn_rter_omp_set_num_threads() {
	omp_set_num_threads(4);
	printf("Number of threads set to 4.\n");
#pragma omp parallel
	{
		printf("Hello world!\n");
	}
}

void fn_rter_omp_get_procs() {
	int num_procs = omp_get_num_procs();
	printf("\nNumber of processors available: %d\n", num_procs);
}


void fn_rter_omp_get_max_threads() {
	int max_threads = omp_get_max_threads();
	printf("\nMaximum number of threads: %d\n", max_threads);
}

void fn_rter_omp_get_thread_num() {
#pragma omp parallel
	{
		printf("Thread number: %d\n", omp_get_thread_num());
	}
	printf("\n");
}

void fn_rter_omp_in_parallel(){
#pragma omp parallel
	{
		if (omp_in_parallel()) {
			printf("Currently in a parallel region.\n");
		}
	}
	printf("\nNot currently in a parallel region.\n");
	printf("\n");
}
void fn_rter_omp_set_get_nested() {
	omp_set_nested(1);
	if (omp_get_nested()) {
		printf("Nested parallelism is enabled.\n");
	}
	else {
		printf("Nested parallelism is disabled.\n");
	}
	printf("\n");
#pragma omp parallel num_threads(2)
	{
		int outer_thread_id = omp_get_thread_num();
		printf("Outer parallel region, thread %d\n", outer_thread_id);

#pragma omp parallel num_threads(2)
		{
			int inner_thread_id = omp_get_thread_num();
			printf("  Inner parallel region, thread %d of thread %d\n", inner_thread_id, outer_thread_id);
		}
	}
}

int fn_rter_omp_get_wtime() {
	double start_time = omp_get_wtime();
	// Simulate some work
	printf("\n");
	for (volatile int i = 0; i < 1000000; ++i);
	double end_time = omp_get_wtime();
	printf("Elapsed time: %f seconds\n", end_time - start_time);
	return 0;
}

int fn_rter_omp_get_wtick() {
	double tick = omp_get_wtick();
	printf("\n");
	printf("Tick value: %f seconds\n", tick);
	return 0;
}

//These functions are not working in Visual studio 2022
//Error Messaage- Identifier not found

//omp_get_thread_limit()
//omp_set_max_active_levels();
//omp_get_max_active_levels();
//omp_get_level();
//omp_get_ancestor_thread_num();
//omp_get_team_size();
//omp_get_active_level();
//omp_get_cancellation();
//omp_in_final();
//omp_get_proc_bind();
//omp_set_default_device();
//omp_get_default_device();
//omp_get_num_devices();
//omp_get_num_teams();
//omp_get_team_num();

