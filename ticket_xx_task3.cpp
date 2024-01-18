#include <cstdio>
#include <cmath>
#include <conio.h>

int main(){

	int n;
	float p, q, c;
	scanf_s("%d %f %f %f", &n, &p, &q, &c);
	
	float y;
	float dx = 0.01;
	for(int k = n; k > 0; --k) 
	{
		for(float x = p; x <= q; x += dx) 
		{
			y = (float)k * cos(5 * x + c) ;
			printf("%f \n", y);
		}
	}
	

	_getch();

	return 0;
}