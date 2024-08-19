#include <stdio.h>
#include <math.h>

const double EPS = 0.000001;

enum numberOfSolutions {
    ZERO,
    ONE,
    TWO,
    INFINITE
};

struct polynom {
    double a, b, c, d, x1, x2;
    numberOfSolutions n;
};

void readPolynom(polynom *p) {
    printf("Enter 3 multipliers of the quadratic equation:\n");
    scanf("%lf %lf %lf", &(p->a), &(p->b), &(p->c));
}

void printPolynom(polynom *p) {
    printf("Equation: ");
    printf("%lfx^2 + %lfx + %lf = 0\n", p->a, p->b, p->c);
}

void solvePolynom(polynom *p) {
    if (p->a == 0) {
        if (p->b == 0) {
            if (p->c == 0) p->n = INFINITE;
            else p->n = ZERO;
        } else {
            p->n = ONE;
            p->x1 = - p->c / p->b;
        }
    } else {
        p->d = p->b * p->b - 4 * p->a * p->c;
        if (p->d < -EPS) p->n = ZERO;
        else if (fabs(p->d) <= EPS) {
            p->n = ONE;
            p->x1 = -p->b / (2 * p->a);
        }
        else {
            p->n = TWO;
            p->x1 = -(p->b + sqrt(p->d)) / (2 * p->a);
            p->x2 = (sqrt(p->d) - p->b) / (2 * p->a);
        }
    }
}

void printPolynomSolutions(polynom *p) {
    switch (p->n) {
        case ZERO:
            printf("The equation has no solutions\n");
            break;
        case ONE:
            printf("The only root of the equation is: %lf\n", p->x1);
            break;
        case TWO:
            printf("The equation has 2 solutions: %lf and %lf\n", p->x1, p->x2);
            break;
        case INFINITE:
            printf("The equation has no solutions\n");
            break;
    }
}

int main() {
    struct polynom p;
    readPolynom(&p);
    //printPolynom(&p);
    solvePolynom(&p);
    printPolynomSolutions(&p);
}