#include <iostream>
#include <conio.h>
#include <cmath>
int main()
{
	int n, m;
	double a;
	scanf_s("%d %d %lf", &n, &m, &a);

	long double sum = 0;
	long double y = 1;

	for(int i = 0; i <= n; ++i)
	{
		for(int j = 0; j <= m; ++j)
		{
			sum += pow(a, (double)(i + j));

		}
		y *= sum;
	}
	printf("%Lf", y);
	_getch();
	return 0;
}