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
	float x, t, finalall, finalsum;
	printf("Plesae enter your increment: ");
	scanf("%g", &t);
	printf("x   erf(x) \n");
	printf("__________ \n");
	for (x = 0; x <= 2; x = x+t)
	{
		finalsum = exp(x*x);
		printf("%3g   %3g \n", x, finalsum * 2/sqrt(3.1415));
	}

	return(0);
}
