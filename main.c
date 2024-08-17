#include <stdio.h>
#include <math.h>

main (void) {
    float a, b, c;
    printf("Enter 3 multipliers of the quadratic equation:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) printf("The equation has an infinite number of solutions\n");
            else printf("The equation has no solutions\n");
        } else printf("The only root of the equation is: %f\n", - c / b);
    } else {
        float d = b * b - 4 * a * c;
        if (d < 0) printf("The equation has no solutions\n");
        else if (d == 0) printf("The only root of the equation is: %f\n", -b / (2 * a));
        else printf("The equation has 2 solutions: %f and %f\n", -(b + sqrt(d)) / (2 * a), (sqrt(d) - b) / (2 * a));
    }
    return 0;
}