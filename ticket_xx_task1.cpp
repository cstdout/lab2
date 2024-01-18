#include <cstdio>
#include <conio.h>
#include <cmath>

int main()
{
	double a, b, c, D, x1, x2, d;
	bool noSolutions = false;
	scanf("%lf %lf %lf", &a, &b, &c);
	const double EPS = 1e-6;
	if(abs(a) <= EPS) 
	{
		if(abs(b) > EPS) 
		{
			x1 = x2 = -c / b;
		}
		else 
		{
			noSolutions = true;
		}
	}
	else 
	{
		D = b * b - 4 * a * c;
		if (D < 0.0) 
		{
			noSolutions = true;
		}
		else
		{
			d = sqrt(D);
			double v = 2 * a;
			x1 = (-b - d) / v;
			x2 = (-b + d) / v;
		}
	}

	if (noSolutions)
	{
		printf("No solutions.");
	}
	else
	{
		printf("x1 = %lf; x2 = %lf", x1, x2);
	}
  
	getch();
	return 0;
}