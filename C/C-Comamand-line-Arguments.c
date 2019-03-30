//https://ece.uwaterloo.ca/~dwharder/icsrts/C/05/


#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
	
	printf("argv[0]: %s\n", argv[0]);
	printf("argc:    %d\n", argc);

	if (argc == 1){
		printf("no arguments were passed.\n");
	}else {
		printf("Arguments:\n");
		for (i = 1; i < argc; ++i) {
			printf("%d. %s\n", i, argv[i]);

		}	
	}
	return 0;
}

/*

argc is the amount of the arguments passed  and always returns one

argv[0] is the name of the executable and path at the beginning of the process

*/
