#ifndef STANDARD_DEVIATION_H
#define STANDARD_DEVIATION_H

double calculateSD(double data[], int size);
double covariance(double data_y[], double data_x[], int n);
double correlation(double calculateSDY, double calculateSDX, double covariance);

#endif

