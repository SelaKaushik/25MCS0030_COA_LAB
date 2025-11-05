#include<stdio.h>
//#include "fn_helloworld_srl.h"
//#include "fn_helloworld_prl.h"
//
//#include "ret_et_helloworld.h"
//#include "rt_et_helloworld_tid.h"
//
//#include "run_time_environment_routines.h"
//#include "050_scheduling_static.h"
//#include "050_scheduling_dynamic.h"
//#include "050_scheduling_guided.h"
//#include "060_data_env_constructs.h"
//#include "00_cover_screen.h"
//
//#include "mnudrvprg_010_parallel_construct.h"
//#include "mnudrvprg_020_runtime_environment_routines.h"
//
//#include "030_wsc_for_pp1.h"
//#include "031_wsc_for_num_square_srl.h"
//#include "031_wsc_for_num_square_prl.h"

//#include "040_wsc_sections_pp1.h"

//#include"070_critical_section.h"
#include"070_reduction_clause.h"


//#include"BakeryOrderSystem_OpenMPScheduling.h"
//#include "Simulating_DeckOfCards.h"

int main() {
	//fn_helloworld_srl();
	//fn_helloworld_prl();
	
	//fn_ret_et_helloworld_srl();
	//fn_ret_et_helloworld_prl();
	
	//fn_rt_tid_helloworld_srl();
	//fn_rt_tid_helloworld_prl();

	/*fn_rter_omp_get_num_threads();
	fn_rter_omp_set_num_threads();
	fn_rter_omp_get_procs();
	fn_rter_omp_get_max_threads();
	fn_rter_omp_get_thread_num();
	fn_rter_omp_in_parallel();
	fn_rter_omp_set_get_nested();
	fn_rter_omp_get_wtime();
	fn_rter_omp_get_wtick();*/

	//fn_mnudrvprg_010_parallel_construct();
	//fn_mnudrvprg_020_runtime_environment_routines();

	/*fn_wsc_for_1construct();
	printf("\n\n");
	fn_wsc_for_2constructs();*/

	//fn_num_square();

	//fn_num_square_prl();

	//fn_wsc_sections_pp1_srl();
	//fn_wsc_sections_pp1_prl();

	/*fn_static_01();
	fn_static_02();
	fn_dynamic_01();
	fn_dynamic_02();
	fn_guided_01();
	fn_guided_02();*/
	//fn_red();
	
	//fn_run_vector_addition();

	//fn_critical_section_example();
	fn_reduction_example();

	//fn_bakery_order_system();
	//fn_Simulation_DeckOfCards();
	//fn_main_page();
	return 0;

	// 12pm - 2 pm  Available time. SJT 411 A06. Take appointment before coming.

	//create project LA4_25MCS0030
	//create LA4_25MCS00030_main.cpp
	//create LA4_25MCS0030_mnudrvprg.h
	//			|
	//			|- fn_mnudrvprg(){}
	//create LA4_25MCS0030_programtitle.h
	//			|
	//			|- fn_projecttitle_srl(){}
	//			| -fn_projecttitle_prl(){}


}