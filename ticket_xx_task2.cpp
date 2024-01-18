#include <cstdio>
#include <cmath>
#include <conio.h>

int main(){
	float a, b, d;
	scanf_s("%f %f %f", &a, &b, &d);
	
	float y;
	float x = a, dx = 0.01;

	float xSquared, cosE;
	while (x <= b) 
	{
		xSquared = x * x;

		if (xSquared + 1.0 < d) 
		{
			y = sin(2.0 * xSquared);
		}
		else 
		{
			cosE = cos(exp(x));
			y = cosE * cosE;
		}

		printf("%f \n", y);

		x += dx;
	}
	_getch();

	return 0;
}