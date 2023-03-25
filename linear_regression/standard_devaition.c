#include "standard_devaition.h"
#include "average.h"
#include <math.h>

double calculateSD(double data[], int n) {
    double sum = 0.0, mean, SD = 0.0;
    int i;

    // Calculate mean
    for(i = 0; i < n; ++i) {
        sum += data[i];
    }
    mean = sum/n;

    // Calculate sum of squared differences from mean
    for(i = 0; i < n; ++i) {
        SD += pow(data[i] - mean, 2);
    }

    // Calculate standard deviation
    return sqrt(SD / (n - 1));
}
double covariance(double data_y[], double data_x[], int n){
	double sum_x = 0.0, sum_y, bsum, single_x, single_y, average_y, average_x, covariance = 0.0;
	int i;
	for(i = 0; i < n; ++i){
		sum_x += data_x[i];
		sum_y += data_y[i];
	}
	average_x = sum_x/n;
	average_y = sum_y/n;
	for(i = 0; i < n; i++){
		single_x =+ data_x[i] - average_x;
		single_y =+ data_y[i] - average_y;
	}
	bsum = single_x * single_y;
	covariance = bsum/n-1;
	
	return covariance;
}
