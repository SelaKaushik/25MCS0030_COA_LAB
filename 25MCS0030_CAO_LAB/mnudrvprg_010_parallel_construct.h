#include "stdio.h"
#include "fn_helloworld_srl.h"
#include "fn_helloworld_prl.h"
#include <cstdlib>

int  fn_mnudrvprg_010_parallel_construct(){

	int choice;
	while (1) {
		printf("#############################\n");
		printf("List of choices");
		printf("0: Exit\t 1: Hello World Serial program output\t 2: Hello World Parallel program output \n");
		printf("#############################\n\n");
		printf("Enter your choice\n");

		scanf_s("%d", &choice);
		switch (choice) {
		case 0:
			printf("You opted to exit pro gram\n");
			exit(0);
			break;

		case 1:
			printf("This is output of Hello World serial program\n");
			fn_helloworld_srl();
			break;

		case 2:
			printf("This is output of Hello World parallel program\n");
			fn_helloworld_prl();
			break;

		default:
			printf("You opted a wrong choice\n");
			break;
		}
	}

	return 0;
}
