#include "lineSolver.h"

numberOfSolutions solveLinear(double p, double q, double* x) {
    assert(x != nullptr);
    if (isEqual(p, 0)) {
        return (isEqual(q, 0)) ? INFINITE : ZERO;
    } else {
        *x = - q / p;
        return ONE;
    }
}