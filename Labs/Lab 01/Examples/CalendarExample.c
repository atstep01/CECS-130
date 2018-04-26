#include <stdio.h>

int main(void) {
	printf("The File name is %s\n", __FILE__);
	printf("The Line number is %d\n", __LINE__);

	printf("\t\t\tJanuary 2017\n");
	printf("\tSun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	printf("\t1\t2\t3\t4\t5\t6\t7\n");
	printf("\t8\t9\t10\t11\t12\t13\t14\n");
	printf("\t15\t16\t17\t18\t19\t20\t21\n");
	printf("\t22\t23\t24\t25\t26\t27\t28\n");
	printf("\t29\t30\t31\n");

	printf("\nThe Line number is %d\n", __LINE__);

	return 0;
}
