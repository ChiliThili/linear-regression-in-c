#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "average.h"
#include "standard_devaition.h"

int main(){
	int td_x[7] = {1,3,6,4,3,7,9};
	int td_y[7] = {1,2,3,4,5,6,8};
	double td_ax = average(td_x, sizeof(td_x)/sizeof(int));
	double td_ay = average(td_y, sizeof(td_y)/sizeof(int));
	double tdx_l = sizeof(td_x)/sizeof(int);
	double tdy_l = sizeof(td_y)/sizeof(int);
	double covariance = covariance(td_x, td_y, 7);
	double SDx = calculateSD(td_x, 7);
	double SDy = calculateSD(td_y, 7);
	double correlation = correlation(SDy, SDx, covariance);
	double b = (SDy/SDx) * correlation;
	double a = (SDy/SDx) * correlation * td_ax + td_y;
	printf("A ist: %f \n",a); 
	printf("B ist: %f \n",b);
	return 0;
}
