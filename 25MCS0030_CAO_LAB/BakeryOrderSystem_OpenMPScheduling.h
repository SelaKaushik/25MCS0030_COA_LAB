#include"stdio.h"
#include"omp.h"
#define NUM_ORDERS 23


double fn_static_order() {
	omp_set_num_threads(4);
	double start_time = omp_get_wtime();
	printf("Static Scheduling for Bakery Orders\n");
#pragma omp parallel for schedule(static)
	for (int order = 1; order <= NUM_ORDERS; order++) {
		printf("Preparing Order %d by thread %d\n", order, omp_get_thread_num());
	}
	double end_time = omp_get_wtime();
	printf("Total time taken (static): %f seconds\n", end_time - start_time);
	double time_staic = end_time - start_time;
	return time_staic;
}

double fn_dynamic_order() {
	omp_set_num_threads(4);
	double start_time = omp_get_wtime();
	printf("Dynamic Scheduling for Bakery Orders\n");
#pragma omp parallel for schedule(dynamic)
	for (int order = 1; order <= NUM_ORDERS; order++) {
		printf("Preparing Order %d by thread %d\n", order, omp_get_thread_num());
	}
	double end_time = omp_get_wtime();
	printf("Total time taken (dynamic): %f seconds\n", end_time - start_time);
	double time_dynamic = end_time - start_time;
	return time_dynamic;
}

double fn_guided_order() {
	omp_set_num_threads(4);
	double start_time = omp_get_wtime();
	printf("Guided Scheduling for Bakery Orders\n");		
#pragma omp parallel for schedule(guided)
	for (int order = 1; order <= NUM_ORDERS; order++) {
		printf("Preparing Order %d by thread %d\n", order, omp_get_thread_num());
	}
	double end_time = omp_get_wtime();
	printf("Total time taken (guided): %f seconds\n", end_time - start_time);
	double time_guided = end_time - start_time;
	return time_guided;
}

void fn_workload_distribution_summary() {
	int handled_static[NUM_ORDERS];
	int handled_dynamic[NUM_ORDERS];
	int handled_guided[NUM_ORDERS];
	double time_static = fn_static_order();
	double time_dynamic = fn_dynamic_order();
	double time_guided = fn_guided_order();

	printf("\n=== Workload Distribution Summary ===\n");

	printf("\nFastest scheduling method: ");
	if (time_static < time_dynamic && time_static < time_guided)
		printf("STATIC (%.4f sec)\n", time_static);
	else if (time_dynamic < time_guided)
		printf("DYNAMIC (%.4f sec)\n", time_dynamic);
	else
		printf("GUIDED (%.4f sec)\n", time_guided);

	printf("\nObservations:\n");
	printf("1. Static scheduling divides orders equally among threads, but if order times vary,\n");
	printf("   some threads finish early while others stay busy (poor load balance).\n");
	printf("2. Dynamic scheduling allows threads to take new orders as soon as they finish,\n");
	printf("   achieving better load balance and usually faster total time.\n");
	printf("3. Guided scheduling starts with large chunks and gradually decreases chunk size,\n");
	printf("   often performing best when order times are highly unpredictable.\n");

	// Recommendation
	printf("\n Best suited for unpredictable tasks: GUIDED scheduling\n");
	printf("Best suited for equal workloads: STATIC scheduling\n");
	printf("Balanced choice for general cases: DYNAMIC scheduling\n");
}

void fn_bakery_order_system() {
	int choice;
	while(1) {
		printf("\nBakery Order System - OpenMP Scheduling\n");
		printf("1. Static Scheduling\n");
		printf("2. Dynamic Scheduling\n");
		printf("3. Guided Scheduling\n");
		printf("4. Work distribution summary and Simulation Insights\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf_s("%d", &choice);
		switch (choice) {
		case 1:
			fn_static_order();
			break;
		case 2:
			fn_dynamic_order();
			break;
		case 3:
			fn_guided_order();
			break;
		case 4:
			fn_workload_distribution_summary();
			break;
		case 5:
			return;
		default:
			printf("Invalid choice. Please try again.\n");
		}
	}
}