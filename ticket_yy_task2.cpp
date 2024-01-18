#include <cstdio>
#include <conio.h>

int main(){
	int n;
	scanf_s("%d", &n);
	int sum = n + 1;
	int i = 2;
	do {
		if (n % i == 0)
		{
			sum += i;
		}
		++i;
	}while(i < n);
	
    printf("%d", sum);
	_getch();
	return 0;
}
