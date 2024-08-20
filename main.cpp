#include <stdio.h>
#include <math.h>

const double EPS = 0.000001;

enum numberOfSolutions {
    ZERO,
    ONE,
    TWO,
    INFINITE
};


void readQuadratic(double *a, double *b, double *c) {
    printf("Enter 3 multipliers of the quadratic equation:\n");
    scanf("%lf %lf %lf", a, b, c);
}

numberOfSolutions solveLinear(double p, double q, double* x) {
    if (p == 0) {
        return (q == 0) ? INFINITE : ZERO;
    } else {
        *x = - q / p;
        return ONE;
    }
}

numberOfSolutions solveQuadratic(double a, double b, double c, double* x1, double* x2) {
    if (a == 0) {
        return solveLinear(b, c, x1);
    } else {
        double d = b * b - 4 * a * c;
        if (d < -EPS) return ZERO;
        else if (d <= EPS) {
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


void printQuadraticSolutions(numberOfSolutions n, double x1, double x2) {
    switch (n) {
        case ZERO:
            printf("The equation has no solutions\n");
            break;
        case ONE:
            printf("The only root of the equation is: %lf\n", x1);
            break;
        case TWO:
            printf("The equation has 2 solutions: %lf and %lf\n", x1, x2);
            break;
        case INFINITE:
            printf("The equation has an infinite number of solutions\n");
            break;
    }
}

int main() {
    double a, b, c, x1, x2;
    numberOfSolutions n;
    readQuadratic(&a, &b, &c);
    n = solveQuadratic(a, b, c, &x1, &x2);
    printQuadraticSolutions(n, x1, x2);
}