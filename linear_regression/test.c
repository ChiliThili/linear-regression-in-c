#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "standard_devaition.h"
#include "average.h"

int main(){
	double array[] = {6,4,3,1};
	int size = sizeof(array)/sizeof(array[0]);
	printf("The size of the array is: %d\n", size);
	double SD = calculateSD(array, 4);
	printf("The standard deviation is: %.6f\n", SD);
	return 0;
}
