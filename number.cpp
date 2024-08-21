#include "number.h"

const double DOUBLE_EPSILON = 0.000001;

bool isEqual(double a, double b) {
    return fabs(a - b) <= DOUBLE_EPSILON;
}

bool isZero(double a) {
    return fabs(a) <= DOUBLE_EPSILON;
}

bool isEqual(char* f, char* s) {
    for (int i = 0; f[i] == s[i]; i++)
        if (s[i] == '\0') return true;
    return false;
}

bool isEqual(char* f, const char* s) {
    for (int i = 0; f[i] == s[i]; i++)
        if (s[i] == '\0') return true;
    return false;
}