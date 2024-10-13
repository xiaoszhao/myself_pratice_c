#include <stdio.h>
int main()
{
	int i=0;
	double single=0;
	double sum = 0;
	double molecule = 1.0;

	for (i = 1; i <= 100; i++)
	{
		single = molecule / i;
		sum += single;
		molecule *= -1;
	}
	printf("%f", sum);
	return 0;
}