#include "Average.c"
#include <math.h>
#include <stdio.h>

int main(){
	double data[4]= {1,2,3,4};
  float sum = 0.0, mean, SD = 0.0;
  int i;
	int size = 4;
  mean = average((int *)data, size);
  for (i = 0;i < size; i++) {
      SD += pow(data[i] - mean, 2);
			printf("This is the Standard devaition: %f", sqrt(SD / size));
  }
}
