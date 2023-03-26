#ifndef STANDARD_DEVIATION_H
#define STANDARD_DEVIATION_H

#include <stdio.h>
#include <math.h>
#include "average.h"

double calculateESD(double data[], double average, int n);
double covariance(double data_y[], double data_x[], double average_x, double average_y, int n);
double correlation(double calculateSDY, double calculateSDX, double covariance);

#endif
