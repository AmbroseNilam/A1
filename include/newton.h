#ifndef __ANILAM_NEWTON__
#define __ANILAM_NEWTON__

/**
 * newtonRecur
 * Recursively solves the square-root of given value using newtons algorithm
 * IN: Double x - the value to the square root. Double a - Aproximation. Double e - number to approximate/validate result.
 * Out: Returns double value of the result of recursive algorithm
 * POST: NONE.
 */
double newtonRecur(double, double, double);

/**
 * newtonR
 * Iteratively solves the square-root of given value using newtons algorithm
 * IN: Double x - the value to the square root. Double e - number to approximate/validate result.
 * Out: Returns double value of the result of newton algorithm
 * POST: NONE.
 */
double newton(double, double);

#endif