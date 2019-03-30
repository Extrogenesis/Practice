// https://www.gribblelab.org/CBootCamp/7_Memory_Stack_vs_Heap.html


#include <stdio.h>

double multiplyByTwo (double input) {
	double twice = input * 2.0;
	return twice;
}

int main (int argc, char *argv[])
{
	int age = 30;
	double salary = 12345.67;
	double myList[3] = {1.2, 2.3, 3.4};

	printf("double you salary is %.3f\n", multiplyByTwo(salary));


	return 0;
}

