#include <stdio.h>
#include <math.h>
int main ()
{
	double a, b, r, d, y = 0;

	scanf_s("%lf %lf %lf %lf", &a, &b, &r, &d);
	
	double t, c;
	for (double x = a; x <= b; x += r)
	{
		t = x * x;
		if (t + 1 < d) 
		{
			y = sin(2 * t);
		}
		else
		{
			c = cos(exp(x));
			y = c * c;
		}
		printf("%lf\n", y);
	}
	

	return 0;
}
