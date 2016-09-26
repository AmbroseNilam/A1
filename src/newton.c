/****************************************
 * Ambrose Nilam        		0932038 *
 * CIS*2520	               		A1		*
 * September 26th 2016					*
*****************************************/

#include "math.h"

double newton(double x, double E) {
	if (x > 0.0) {
		double a = x / 2.0;
		while ((fabs(a * a - x) <= E) == 0) { // Aproximation check
			a = (a + x / a) / 2; // Re-Approximate
		}
		return a;
	}
	return 0.0;
}

double newtonRecur(double x, double a, double E) {
	if ((fabs(a * a - x) <= E) == 0) {
		return (newtonRecur(x, (a + x / a) / 2, E));
	} else {
		return a;
	}
}
