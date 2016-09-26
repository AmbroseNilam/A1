/****************************************
 * Ambrose Nilam        		0932038 *
 * CIS*2520	               		A1		*
 * September 26th 2016					*
*****************************************/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "process.h"


void permute(char* pre, char* str) {
	int n = strlen(str);
	if(n == 0) { //When string has been broken down enough print out value.
		printf("%s\n", pre);
	} else {
		for(int i = 0; i < n; i++) {
			char* charAT = malloc(sizeof(char));
			charAT[0] = str[i];

			char* prefix = append(pre, charAT); //Concatinate two strings
			char* string = append(subString(str, 0, i), subString(str, i + 1, n)); //Break down string

			permute(prefix, string); //Send values back into permute.
		}
	}
}