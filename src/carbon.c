#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "process.h"

/**
 * permute
 * Recursively shortens and appends the pre and str until has reached a certain length and then output results. Does this for each iteration of String.
 * IN: String Prefix: Used to input the prefix and append it to current String. String string: The String the permute recursively.
 * Out: NONE
 * POST: BASE CASE: Returns the input when string has been reduced enough.
 */

void permute(char* pre, char* str) {
	int n = strlen(str);
	if(n == 0) {
		printf("%s\n", pre);
	} else {
		for(int i = 0; i < n; i++) {
			char* charAT = malloc(sizeof(char));
			charAT[0] = str[i];

			char* prefix = append(pre, charAT);
			char* string = append(subString(str, 0, i), subString(str, i + 1, n));

			permute(prefix, string);
		}
	}
}