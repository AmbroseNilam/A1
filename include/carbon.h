#ifndef __ANILAM_CARBON__
#define __ANILAM_CARBON__

/**
 * permute
 * Recursively shortens and appends the pre and str until has reached a certain length and then output results. Does this for each iteration of String.
 * IN: String Prefix: Used to input the prefix and append it to current String. String string: The String the permute recursively.
 * Out: NONE
 * POST: BASE CASE: Returns the input when string has been reduced enough.
 */

void permute(char*, char*);

#endif