#include <stdio.h>
#include <math.h>

#define MATH_PI acos(0.0)

#ifndef SIN_CNT_SAMPLES
    #define SIN_CNT_SAMPLES 100
#endif

#ifndef SIN_XMIN
    #define SIN_XMIN 0.0
#endif

#ifndef SIN_XMAX
    #define SIN_XMAX 4*MATH_PI
#endif

int main(void)
{
	double step = (SIN_XMAX - SIN_XMIN) / SIN_CNT_SAMPLES;
	for(double x = SIN_XMIN; x <= SIN_XMAX; x += step) {
		printf("%lf\t%lf\n", x, sin(x));
	}

	return 0;
}
