#include <stdio.h>
#include <string.h>
#include "standard_devaition.h"
#include "average.h"

int main() {
    // Based on https://studyflix.de/statistik/lineare-regression-2147
    double td_x[] = {28,23,32,35,29,30,27,34,32};
    double td_y[] = {400,60,630,560,290,620,440,610,250};
    int tdx_l = sizeof(td_x) / sizeof(double);
    int tdy_l = sizeof(td_y) / sizeof(double);
    double td_ax = average(td_x, tdx_l);
    double td_ay = average(td_y, tdy_l);
    printf("td_ax: %f\n", td_ax);
    printf("td_ay: %f\n", td_ay);
    double ESDx = calculateESD(td_x, td_ax, tdx_l);
    double ESDy = calculateESD(td_y, td_ay, tdy_l);
    printf("ESDx: %f\n", ESDx);
    printf("ESDy: %f\n", ESDy);
    double cvr = covariance(td_x, td_y, td_ax, td_ay, tdx_l);
    printf("cvr: %f\n", cvr);
    double crl = correlation(ESDy, ESDx, cvr);
    printf("crl: %f\n", crl);
    double b = (ESDy / ESDx) * crl;
    double a = (-1 * (ESDy / ESDx) * crl * td_ax) + td_ay;
    printf("Formula: f(x) = b * x + a\n");
    printf("b: %f \n", b);
    printf("a: %f \n", a);
    printf("f(28) = %f\n", (30 * b) + a);
    return 0;
}
