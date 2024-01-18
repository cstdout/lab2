#include <cstdio>
#include <conio.h>
#include <cmath>

int main()
{

	float x, y;
	scanf_s("%f %f", &x, &y);

	float xSquared = x * x;
	float doubledXSquared = 2 * xSquared;

	float z;

	if (((xSquared + y * y) <= 1) && (y <= -xSquared))
	{
		z = doubledXSquared + sin(x);
	}
	else
	{
		z = exp(doubledXSquared + 1);
	}

	printf("%f \n", z);

	_getch();
	return 0;
}