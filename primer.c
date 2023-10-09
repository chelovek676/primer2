#include <stdio.h>
#include <math.h>

int main ()
{

    float xBeg = 1, yBeg = 0, zBeg=1, xEnd = 3, yEnd = 1, zEnd = 2, xMax = 0, yMax = 0, zMax = 0, uMax = -100, u;
    float hx = 1.2, hy = 0.55, hz = 0.6;

    for (float a = xBeg; a <= xEnd; a += hx) {
        for (float b = yBeg; b <= yEnd; b += hy) {
            for (float c = zBeg; c <= zEnd; c += hz) {

                u = sin(fabs((b - pow(0.5, a)) * (a - b / (pow(2, c) + 0.25 * pow(2, a)))));
                printf("x=%f, y=%f, z=%f, u(x,y,z)=%f\n", a, b, c, u);

                if (u > uMax) {
                    uMax = u;
                    xMax = a;
                    yMax = b;
                    zMax = c;
                }

            }
        }
    }

printf("maxX=%f, maxY=%f, maxZ=%f, maxU=%f\n", xMax, yMax, zMax, uMax);
return 0;
}
