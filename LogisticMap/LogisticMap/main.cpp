// LogisticMap.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "logisticMap.h"

double iteration(double lambda, double x) {
	double x_n = 4 * lambda*x*(1 - x);
	return x_n;
}


int main()
{
	double x_0 = 0;
	double lambda = 0.1;

}

