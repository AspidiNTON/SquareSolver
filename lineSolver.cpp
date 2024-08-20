#include "lineSolver.h"

numberOfSolutions solveLinear(double p, double q, double* x) {
    if (p == 0) {
        return (q == 0) ? INFINITE : ZERO;
    } else {
        *x = - q / p;
        return ONE;
    }
}