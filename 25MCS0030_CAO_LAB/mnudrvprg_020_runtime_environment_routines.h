#include "stdio.h"
#include "ret_et_helloworld.h"
#include "rt_et_helloworld_tid.h";
#include <cstdlib>

int fn_mnudrvprg_020_runtime_environment_routines() {
	int choice;
	while (1) {
		printf("#############################\n");
		printf("List of choices\n");
		printf(" 0: Exit\n 1: Hello World Runtime Environment Serial program output\n 2: Hello World Runtime Environment Parallel program output \n 3. Hello World Runtime Environment Execution Time Serial with ThreadId\n 4. Hello World Runtime Environment Execution Time Parallel output with ThreadId\n");
		printf("#############################\n\n");
		printf("Enter your choice\n");

		scanf_s("%d", &choice);
		switch (choice) {
		case 0:
			printf("You opted to exit program\n");
			exit(0);
			break;

		case 1:
			printf("This is output of Hello World Serial program\n");
			fn_ret_et_helloworld_srl();
			break;

		case 2:
			printf("This is output of Hello World Parallel program\n");
			fn_ret_et_helloworld_prl();
			break;

		case 3:
			printf("This is output of Runtime Environment Execution Time Serial with ThreadId\n");
			fn_rt_tid_helloworld_srl();
			break;

		case 4:
			printf("This is output of Runtime Environment Execution Time Parallel with ThreadId\n");
			fn_rt_tid_helloworld_prl();
			break;

		default:
			printf("You opted a wrong choice\n");
			break;
		}
	}

	return 0;
}
