#include "number.h"
#include "quadPrint.h"
#include "quadRead.h"
#include "quadSolver.h"

int main() {
    double a, b, c, x1, x2;
    numberOfSolutions n;
    readQuadratic(&a, &b, &c);
    n = solveQuadratic(a, b, c, &x1, &x2);
    printQuadraticSolutions(n, x1, x2);
    /*double x;
    printf("Enter real number to convert to binary:\n");
    scanf("%lf", &x);
    printRealNumberBinaryRepresentation(x);*/
}