#include "average.h"

double average(int data[], int size) {
    double sum = 0.0;
    int i;
    for (i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}
