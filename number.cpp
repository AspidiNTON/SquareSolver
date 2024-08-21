#include "number.h"

bool isEqual(double a, double b) {
    return fabs(a - b) <= 0.000001;
}