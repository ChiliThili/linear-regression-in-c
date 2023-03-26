#include "standard_devaition.h"

double linreg(double td_x[], double td_y[],int tdx_l, int tdy_l,double V){
    double td_ax = average(td_x, tdx_l);
    double td_ay = average(td_y, tdy_l);
    double ESDx = calculateESD(td_x, td_ax, tdx_l);
    double ESDy = calculateESD(td_y, td_ay, tdy_l);
    double cvr = covariance(td_x, td_y, td_ax, td_ay, tdx_l);
    double crl = correlation(ESDy, ESDx, cvr);
    double b = (ESDy / ESDx) * crl;
    double a = (-1 * (ESDy / ESDx) * crl * td_ax) + td_ay;
    return (V * b) + a;
}

