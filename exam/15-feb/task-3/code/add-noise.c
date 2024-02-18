#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef NOISE_PERCENTAGE
#define NOISE_PERCENTAGE 0.05
#endif

double random_in_range(double a, double b)
{
	double range = b - a;
	double ans = (double)random() / RAND_MAX;
	srand(ans*random()*(unsigned)time(NULL));
	return ans * range + a;
}

double add_noise_to_number(double num)
{
	double deviation = num * NOISE_PERCENTAGE;
	return random_in_range(num-deviation, num+deviation);
}

int main(void)
{
	srand((unsigned)time(NULL));
	double x, y;
	while(scanf("%lf %lf", &x, &y) == 2) {
		printf("%lf\t%lf\n",
			   add_noise_to_number(x),
			   add_noise_to_number(y));
	}

	return 0;
}
