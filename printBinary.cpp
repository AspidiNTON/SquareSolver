#include "printBinary.h"

void printRealNumberBinaryRepresentation(double x){
    double s = 0;
    bool f = false;
    for (double i = (1 << 10); i > (1 / (double)(1ll << 30)); i /= 2) {
        if (i < 0.6 && i > 0.4) {
            if (!f) printf("0");
            printf(".");
            f = true;
        }
        if ((s + i) <= x) {
            printf("1");
            f = true;
            s += i;
        } else if (f) printf("0");
    }
}