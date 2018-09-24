#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
	double k = 2;
	double result = 0.0;
	for(int i = 0; i < k; i++)
		result += pow(sin(2 + i/k),2)*(exp(-pow(2 + i/k, 2)) - exp(-pow(2 + (i + 1)/k, 2))); 
	printf("%lf", result);
}

