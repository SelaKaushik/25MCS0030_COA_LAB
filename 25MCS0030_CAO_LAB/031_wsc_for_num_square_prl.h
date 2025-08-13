#include<stdio.h>
#include<omp.h>

#define N 100


void fn_InitializeArray(int arr[]) {
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
}

void fn_computeSquares_prl(int arr[], int square[]) {
#pragma omp parallel for
	for (int i = 1; i <= N; i++) {
		square[i] = arr[i] * arr[i];
		//printf("square of arr[%d]: arr[%d]^2 = %d\n", i, arr[i], square[i]);
	}
}

void fn_displayResults_prl(int square[]) {
	printf("\nSquared Results:\n");
#pragma omp parallel for
	for (int i = 1; i <= N; i++) {
		printf("square[%d] = %d, by ThreadID- %d\n", i, square[i], omp_get_thread_num());
	}
}


int fn_num_square_prl() {
	int arr[N], square[N];
	double start = omp_get_wtime();
	fn_InitializeArray(arr);
	fn_computeSquares_prl(arr, square);
	fn_displayResults_prl(square);
	double end = omp_get_wtime();
	double exe_time_prl = end - start;
	
	printf("\nTime taken for parallel execution: %f sec", exe_time_prl);
	return 0;
}
