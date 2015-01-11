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
	float x, t, finalall, finalsum = 0;
	printf("Plesae enter your increment: ");
	scanf("%g", &t);
	printf("x   erf(x) \n");
	printf("__________ \n");
	for (x = 0; x <= 2.1; x = x+t)
	{
		finalsum += x * exp(-t*t) *  2 / sqrt(3.1415);
		printf("%3g   %3g \n", x, finalsum);
	}
	return(0);
}
