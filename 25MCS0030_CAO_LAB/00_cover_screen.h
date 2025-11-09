#include <stdio.h>
#include <stdlib.h>
#include<omp.h>

#include"colours.h"

#include "mnudrvprg_010_parallel_construct.h"
#include "mnudrvprg_020_runtime_environment_routines.h"
#include "mnudrvprg_050_scheduling_clauses.h"

#include "030_wsc_for_pp1.h"
#include "031_wsc_for_num_square_srl.h"
#include "031_wsc_for_num_square_prl.h"

#include "040_wsc_sections_pp1.h"

#include "060_data_env_constructs.h"

#include"070_critical_section.h"
#include"070_reduction_clause.h"


#include"BakeryOrderSystem_OpenMPScheduling.h"
#include "Simulating_DeckOfCards.h"


int fn_main_page() {
	int i;
	printf("\n");
	fn_red();
	printf("**************************************************************************************************************\n");
	fn_reset();
	fn_blue();
	printf("\t\t\t\tMCSE503L-COMPUTER ARCHITECTURE AND ORGANISATION LAB PROGRAMS\n");
	printf("\t\t\t\t\t\t\tBY\n");
	fn_reset();
	fn_yellow();
	printf("\n");
	printf("\t\t\t\t\tReg.No:25MCS0030  Name:Sri Sivanag Kaushik\n");
	printf("\n");
	fn_reset();
	fn_blue();
	printf("\t\t\t\t\tSubmitted as part of Lab assessment to\n");
	fn_magenta();
	printf("\t\t\t\t\t\tDr.M.RAJASEKHARA BABU\n");
	fn_reset();
	fn_blue();
	printf("\t\t\t\t   SCHOOL OF COMPUTER SCIENCE AND ENGINEERING \n");
	printf("\t\t\t         VELLORE INSTITUTE OF TECHNOLOGY(VIT),VELLORE-632014\n");
	printf("\t\t\t\t\t\t     JUNE 2023\n");
	fn_reset();
	fn_red();
	printf("*****************************************************************************************************************\n");
	
	while (1) {
		fn_yellow();
		printf("\n------------------------------------------------------------------------------------------------------------------\n");
		fn_reset();
		fn_green();
		printf("\t\t\t\t\t\t MAIN MENU - OPENMP PROGRAMS \n");
		printf("0-Exit  1-Parallel Construct Program \t 2-Run-Time Environment Routines Program \t 3-Work Sharing Construct-For\n");
		printf("\n");
		printf("4-Work Sharing Construct-Section \t 5-Scheduling Construct Program \t 6-Data Environment Construct\n");
		printf("\n");
		printf("7 - Critical and Reduction Program \t 8 - Simulating Deck Of Cards\n");
		fn_reset();
		fn_yellow();
		printf("------------------------------------------------------------------------------------------------------------------\n");
		fn_reset();
		printf("Enter your choice: ");
		scanf_s("%d", &i);
		switch (i) {
		case 0: {
			printf("Thank you for opting exit \n");
			return 0;
		}
		case 1: {
			printf("\nThank you for selecting Parallel Construct Program, now check the below list\n");
			fn_mnudrvprg_010_parallel_construct();
			break;
		}
		case 2: {
			printf("\nThank you for selecting Run-Time Environment Routines Program, now check the below list\n");
			fn_mnudrvprg_020_runtime_environment_routines();
			break;
		}
		case 3: {
			printf("\nThank you for selecting Work Sharing Construct-For.\n");
			fn_num_square_srl();
			printf("\n");
			fn_num_square_prl();
			break;
		}
		case 4: {
			printf("\nThank you for selecting Work Sharing Construct-Section.\n");
			fn_wsc_sections_pp1_srl();
			printf("\n");
			fn_wsc_sections_pp1_prl();
			break;
		}
		case 5: {
			printf("\nThank you for selecting Scheduling Constructs Program, now check the below list\n");
			fn_mnudrvprg_050_scheduling_clauses();
			break;
		}
		case 6: {
			printf("\nThank you for selecting Data Environment Construct Program, now check the below list\n");
			fn_run_vector_addition();
			printf("\n");
			break;
		}
		case 7: {
			printf("\nThank you for selecting Critical and Reduction Program, now check the below list\n");
			fn_critical_section_example();
			printf("\n");
			fn_reduction_example();
			break;
		}
		case 8:
			printf("\nThank you for selecting Simulating Deck Of Cards Program, now check the below list\n");
			fn_Simulation_DeckOfCards();
			break;
		
		default: {
			printf("Opted wrong choice \n");
			exit(0);
		}
		}
	}
	return 0;
}

