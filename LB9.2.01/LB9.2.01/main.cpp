#include <stdio.h>
#include "var.h"

#define Z 2
#define SQR(x) ((x) * (x))
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define ABS(x) ((x) >= 0 ? (x) : -(x))

#define PRINTI(x) printf("%s = %f\n", #x, (float)(x))

#define PRINTI(w) puts("control output"); \
        printf (#w"= %f\n",(float)w)

int main()
{
    float x, y, z, w;
    printf("Enter x: ");
    scanf("%f", &x);
    printf("Enter y: ");
    scanf("%f", &y);
    printf("Enter z: ");
    scanf("%f", &z);

    if (1 <= z && z < 10) {
        w = MIN(SQR(x + y), SQR(x + z));
    }
    else if (z < 1 || z >= 10) {
        w = MAX(SQR(x), ABS(5 * y - z));
    }

    PRINTI(w);
    return 0;
}