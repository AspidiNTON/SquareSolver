#include "quadSolver.h"

const double DOUBLE_EPSILON = 0.000001;

numberOfSolutions solveQuadratic(double a, double b, double c, double* x1, double* x2) {
    assert(x1 != nullptr);
    assert(x2 != nullptr);
    assert(x1 != x2);
    if (isEqual(a, 0)) {
        return solveLinear(b, c, x1);
    } else {
        double d = b * b - 4 * a * c;
        if (d < -DOUBLE_EPSILON) return ZERO;
        else if (d <= DOUBLE_EPSILON) {
            *x1 = -b / (2 * a);
            return ONE;
        }
        else {
            *x1 = -(b + sqrt(d)) / (2 * a);
            *x2 = (sqrt(d) - b) / (2 * a);
            return TWO;
        }
    }
}