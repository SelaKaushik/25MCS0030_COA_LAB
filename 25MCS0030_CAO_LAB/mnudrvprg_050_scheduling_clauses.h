#include"stdio.h"
#include"omp.h"

#include"050_scheduling_static.h"
#include"050_scheduling_dynamic.h"
#include"050_scheduling_guided.h"

int fn_mnudrvprg_050_scheduling_clauses() {
	int choice;
	while (1) {
		printf("\n#############################\n");
		printf("List of choices\n");
		printf(" 0: Exit\n 1: Static Scheduling\n 2: Dynamic Scheduling\n 3. Guided Scheduling\n");
		printf("#############################\n\n");
		printf("Enter your choice\n");

		scanf_s("%d", &choice);

		switch (choice) {
		case 0:
			printf("You opted to exit program\n");
			return 0;
			break;
		case 1:
			printf("This is output of Static Scheduling program\n");
			fn_static_01();
			fn_static_02();
			printf("\n");
			break;
		case 2:
			printf("This is output of Dynamic Scheduling program\n");
			fn_dynamic_01();
			fn_dynamic_02();
			printf("\n");
			break;
		case 3:
			printf("This is output of Guided Scheduling program\n");
			fn_guided_01();
			fn_guided_02();
			printf("\n");
			break;
		default:
			printf("Entered wrong choice\n");
		}
	}
	return 0;
}