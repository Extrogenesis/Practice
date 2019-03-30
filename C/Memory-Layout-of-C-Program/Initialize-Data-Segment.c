//https://www.hackerearth.com/practice/notes/memory-layout-of-c-program/


#include <stdio.h>


char c[]="rishabh tripathi"; /* global variable in the Initialized Data Seg in read-write area  */

const char s[]="HackerEarth"; /* global variable stored in Initialized Data Segmen in read-only-area  */


int main()
{
	static int i=11; /* static variable stored in Initialized Data Segment  */

	return 0;
}
