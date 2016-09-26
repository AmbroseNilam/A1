#include <sys/timeb.h>
#include <stdio.h>
#include <stdlib.h>
#include "carbon.h"
#include "ackermann.h"
#include "newton.h"
#include "string.h"

/**
 * Function will to the required testing to validate the users input.
 */
int main(int argc, char const *argv[])
{
	if(argc >= 2)
	{
		const char* functionRun = argv[1];
		if(strcmp(functionRun, "newton") == 0) // Compare inputs
		{
			if(argc != 4)
			{
				printf("%s\n", "Invalid Syntax! Use ./main newton (x) -> Example: ./main newton 64 0.1");
			} 
			else 
			{
				double value = atof(argv[2]); 
				double a = value / 2;
				double E = atof(argv[3]); // Parse string to double value
				struct timeb timeStart, timeEnd; // time in milliseconds to compare execution times.
				struct timeb timeStart2, timeEnd2;
				double toReturn = 0.0;

				ftime(&timeStart); // Get the timestamp at this execution point.
				for(int i = 0; i < 10000000; i++) //Iterate x times to get a valid comparison value.
				{
					toReturn = newton(value, E);
				}
				ftime(&timeEnd);

				printf("Newtons [Non-Recursive] executed in: %d (MS) with a result of %f\n", abs((timeEnd.millitm - timeStart.millitm)), toReturn);

				toReturn = 0.0;
				ftime(&timeStart2);
				for(int i = 0; i < 10000000; i++)
				{
					toReturn = newtonRecur(value, a, E);
				}
				ftime(&timeEnd2);

				printf("Newtons [Recursive] executed in: %d (MS) with a result of %f\n", abs((timeEnd2.millitm - timeStart2.millitm)), toReturn);
			}
		} 
		else if(strcmp(functionRun, "carbon") == 0) 
		{
			if(argc != 3)
			{
				printf("%s\n", "Invalid Syntax! Use ./main carbon (string) -> Example: ./main carbon Carbon");
			} 
			else
			{
				char* str = (char*) argv[2];
				char* pre = "";
				permute(pre, str);
			}
		}
		else if(strcmp(functionRun, "ackermann") == 0)
		{
			if(argc != 4) 
			{
				printf("%s\n", "Invalid Syntax! Use ./main ackermann (m n) -> Example: ./main ackermann 1 1");
			} 
			else
			{
				 long m = (long) atoi(argv[2]); 
				 long n = (long) atoi(argv[3]);
				 long result = Acker(m,n);
				 printf("%ld\n", result);
			}
		} 
		else 
		{
			printf("%s\n", "Please enter a valid function to run { newton, carbon, ackermann }");
		}
	} 
	else 
	{
		printf("%s\n", "Invalid Syntax! Use: ./main [newton (x, e), carbon (string), ackermann (m, n, e)]");
	}
	return 0;
}