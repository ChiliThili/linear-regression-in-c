#include "standard_devaition.h"

double calculateESD(double data[], double average, int n) {
    double deviation = 0.0;

    // Calculate sum of squared differences from average
    for (int i = 0; i < n; ++i) {
        deviation += pow(data[i] - average, 2.0);
    }

    // Calculate standard deviation
    return sqrt(deviation / (n - 1));
}

double covariance(double data_x[], double data_y[], double average_x, double average_y, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (data_x[i] - average_x) * (data_y[i] - average_y);
    }
    return sum / (double) (n - 1);
}

double correlation(double calculateSDY, double calculateSDX, double covariance) {
    return covariance / (calculateSDX * calculateSDY);
}
