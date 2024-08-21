#ifndef TESTER_H
#define TESTER_H
#include "number.h"
#include "quadSolver.h"
#include <assert.h>

struct Test {
    double a = 0, b = 0, c = 0;
    numberOfSolutions n = ZERO;
    double x1 = 0, x2 = 0;
};

int runTest(const Test* t);

int runAllTests();
#endif