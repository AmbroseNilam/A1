******************************************
Ambrose Nilam        		0932038
CIS*2520	               	A1
September 26th 2016
******************************************

***********
Compilation
***********

The command that was used to compile the program was gcc, the compile line being gcc -Wall -std=c99.
"gcc -Wall -std=c99 src/process.c src/carbon.c src/main.c src/ackermann.c src/newton.c -Iinclude -o main"

To compile the program using gcc and create an exectuable simply type 'make'.

******************
USAGE
******************
- To run the program we have to first compile using the command above 'make' and create an executable. Once the executable is created, we must execute it using './main' and specify some arguments. 
- The program has 3 distinct functions: 'newton', 'carbon', 'ackermann'. Each function will take different arguements.
- The syntax for newton is as follows: "./main newton (x) (e)". x being the value to square root and e being the reference number.
- The syntax for carbon is as follows: "./main carbon (string)". string being the character set you wish to perfrom permutation on.
- The syntax for ackermann is as follows: "./main ackermann (m) (n)". m and n being the values to perform the algorithm with.
- The program will detect incorrect input and provide viable output to ensure the user has typed arguments correctly.

******************
TESTING
******************
- The program was tested with "./main newton 64.0 0.01"
	- The expected result is:
		- Newtons [Non-Recursive] executed in: 624 (MS) with a result of 8.000001
		- Newtons [Recursive] executed in: 456 (MS) with a result of 8.000001
- The program was tested with "./main carbon ABC"
	- The expected result is:
		- ABC
		- ACB
		- BAC
		- BCA
		- CAB
		- CBA
- The program was tested with "./main ackermann 4 1"
	- The expected result is:
		- 65533

******************
Known Errors/Constraints
******************
- The program may fail if the memmory is not allocated properly or system does not have enough memmory.
