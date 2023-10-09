#include<stdio.h>


int potenciaR(int x, int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return x;
	else
		return x * potenciaR(x, n-1);
}

int main()
{
	int x, n;

	scanf("%d%d", &x, &n);
	printf("%d\n", potenciaR(x, n));

	return 0;
}
