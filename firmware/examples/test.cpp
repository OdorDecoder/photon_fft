#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

#include "photon_fft.h"

#define N 256
int main()
{
	std::vector<double> inputreal(N);
	std::vector<double> inputimag(N);
	register int i = 0;
	for(i=0;i<N;i++)
	{
		inputreal[i] = 0.5;
		inputimag[i] = 0;
	}

	Fft::transformRadix2(inputreal,inputimag);

	for(i=0;i<N;i++)
	{
		printf("real[%d]-%f , imag[%d]-%f\n",i,inputreal[i],i,inputimag[i]);
	}

	return 0;

}
