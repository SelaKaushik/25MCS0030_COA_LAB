#include<stdio.h>
//#include "fn_helloworld_srl.h"
//#include "fn_helloworld_prl.h"
//
//#include "ret_et_helloworld.h"
//#include "rt_et_helloworld_tid.h"
//
#include "run_time_environment_routines.h"
//
//#include "mnudrvprg_010_parallel_construct.h"
//#include "mnudrvprg_020_runtime_environment_routines.h"
//
//#include "030_wsc_for_pp1.h"
//#include "031_wsc_for_num_square_srl.h"
//#include "031_wsc_for_num_square_prl.h"

//#include "040_wsc_sections_pp1.h"

int main() {
	//fn_helloworld_srl();
	//fn_helloworld_prl();
	
	//fn_ret_et_helloworld_srl();
	//fn_ret_et_helloworld_prl();
	
	//fn_rt_tid_helloworld_srl();
	//fn_rt_tid_helloworld_prl();

	fn_rter_omp_get_num_threads();
	fn_rter_omp_set_num_threads();
	fn_rter_omp_get_procs();
	fn_rter_omp_get_max_threads();
	fn_rter_omp_get_thread_num();
	fn_rter_omp_in_parallel();
	fn_rter_omp_set_get_nested();
	fn_rter_omp_get_wtime();
	fn_rter_omp_get_wtick();

	//fn_mnudrvprg_010_parallel_construct();
	//fn_mnudrvprg_020_runtime_environment_routines();

	/*fn_wsc_for_1construct();
	printf("\n\n");*/
	//fn_wsc_for_2constructs();

	//fn_num_square();

	//fn_num_square_prl();

	//fn_wsc_sections_pp1_srl();
	//fn_wsc_sections_pp1_prl();


	return 0;
}