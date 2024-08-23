#include "number.h"
#include "quadConsole.h"
#include "solver.h"
#include "tester.h"
#include "flags.h"

const flag flagsQuad[] {
    {"-h", "--help", "shows avalible commands"},
    {"-t", "--test", "runs tests"}
};

int main(int argc, const char *argv[]) {
    int flagsSize = sizeof(flagsQuad) / sizeof(flag);
    int flagID = checkFlags(argc, argv, flagsSize, flagsQuad);
    if (flagID == -1) return 0;
    bool testMode = flagID == 1;
    if (testMode) runAllTests();
    else {
        double a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

        readQuadratic(&a, &b, &c);
        numberOfSolutions n = solve(a, b, c, &x1, &x2);
        printQuadraticSolutions(n, x1, x2);
    }
}
