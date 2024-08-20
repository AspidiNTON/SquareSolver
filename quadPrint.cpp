#include "quadPrint.h"

void printQuadraticSolutions(numberOfSolutions n, double x1, double x2) {
    switch (n) {
        case ZERO:
            printf("The equation has no solutions\n");
            break;
        case ONE:
            printf("The only root of the equation is: %lg\n", x1);
            break;
        case TWO:
            printf("The equation has 2 solutions: %lg and %lg\n", x1, x2);
            break;
        case INFINITE:
            printf("The equation has an infinite number of solutions\n");
            break;
    }
}