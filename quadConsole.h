#ifndef QUAD_CONSOLE_H
#define QUAD_CONSOLE_H

#include <stdio.h>
#include <assert.h>

#include "number.h"
#include "colorPrint.h"

void flush();

void readQuadratic(double* a, double* b, double* c);

void printQuadraticSolutions(numberOfSolutions n, double x1, double x2);

#endif