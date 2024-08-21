#ifndef TESTER_H
#define TESTER_H
#include "number.h"
#include "quadSolver.h"

struct Test {
    double a, b, c;
    numberOfSolutions n;
    double x1 = 0, x2 = 0;
};

int runTest(const Test* t);

int runAllTests();
#endif