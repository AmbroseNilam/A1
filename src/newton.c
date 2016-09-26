#include "math.h"

double newton(double x, double E) {
	if (x > 0.0) {
		double a = x / 2.0;
		while ((fabs(a * a - x) <= E) == 0) {
			a = (a + x / a) / 2;
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
