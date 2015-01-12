// Erf Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

int main(void)
{
	float x, dx, t, dt = .1;
	printf("Plesae enter your increment: ");
	scanf("%g", &dx);
	printf("x   erf(x) \n");
	printf("__________ \n");
	for (x = 0; x <= 2.1; x += dx)
	{
		float finalsum = 0;

		for (t = 0; t <= x; t += dt)
		{
			finalsum += x * exp(-t*t) * 2 / sqrt(3.1415);
		}

		printf("%3g   %3g \n", x, finalsum);
	}
	return(0);
}
