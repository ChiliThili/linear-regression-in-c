#include "mathfunctions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Average.c"

int main(){
	int td_x[7] = {1,3,6,4,3,7,9};
	int td_y[7] = {1,2,3,4,5,6,8};
	float td_ax = average(td_x, sizeof(td_x));
	float td_ay = average(td_y, sizeof(td_y));
	return 0;
}
