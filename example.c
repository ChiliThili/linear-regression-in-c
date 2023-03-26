#include <stdio.h>
#include "linreg.h"

int main(){
    //This is the data that we'll analyze
    double array_x[]= {100,30,50,130,230,20,100};
    double array_y[]={100,30,60,20,129,344,240};
    //The length of the Arrays
    int tdx_l = sizeof(array_x) / sizeof(double);
    int tdy_l = sizeof(array_y) / sizeof(double);
    //This is the linear regression
    double examplelr = linreg(array_x,array_y,tdx_l,tdy_l,10.0);
    printf("The Point 10 has the Y Point %f\n", examplelr);
    return 0;
}
