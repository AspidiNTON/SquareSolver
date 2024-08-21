#ifndef QUAD_SOLVER_H
#define QUAD_SOLVER_H
#include <iostream>
#include <assert.h>
#include "lineSolver.h"
#include "number.h"


numberOfSolutions solveQuadratic(double a, double b, double c, double* x1, double* x2);
#endif