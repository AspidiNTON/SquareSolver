#include "tester.h"

const Test tests[8] = {
    {1, -2, 1, ONE, 1},
    {0, 0, 0, INFINITE},
    {0, 5.0, -22.5, ONE, 4.5},
    {1, 0, -4, TWO, 2, -2},
    {0, 0, 28.3, ZERO},
    {5, 0, 34, ZERO},
    {1, -3, -4, TWO, 4, -1},
    {1, 3, 4, ZERO}
};
    
int runTest(const Test *t)
{
    double x1, x2;
    numberOfSolutions n;
    n = solveQuadratic(t->a, t->b, t->c, &x1, &x2);
    if (n != t->n || n == ONE && x1 != t->x1 || n == TWO && (x1 != t->x1 || x2 != t->x2) && (x2 != t->x1 || x1 != t->x2))
    {
        printf("Error in: a = %lg, b = %lg, c = %lg; result: n = %d, ", t->a, t->b, t->c, n);
        if (n == ONE)
            printf("x = %lg", x1);
        if (n == TWO)
            printf("x1 = %lg, x2 = %lg", x1, x2);
        printf("\nExpected: n = %d, ", t->n);
        if (t->n == ONE)
            printf("x = %lg", t->x1);
        if (t->n == TWO)
            printf("x1 = %lg, x2 = %lg", t->x1, t->x2);
        printf("\n");
        return 1;
    }
    return 0;
}

int runAllTests()
{
    for (int i = 1; i <= 8; ++i)
    {
        if (runTest(&(tests[i - 1])))
        {
            printf("Error at test %d\n", i);
            return i;
        }
    }
    printf("Tests complete succesfully\n");
    return 0;
}