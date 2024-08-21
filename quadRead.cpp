#include "quadRead.h"

void readQuadratic(double* a, double* b, double* c) {
    assert(a != nullptr);
    assert(b != nullptr);
    assert(c != nullptr);
    assert(a != b && b != c && a != c);
    printf("Enter 3 multipliers of the quadratic equation:\n");
    scanf("%lf %lf %lf", a, b, c);
}