#include<stdio.h>
#define LOOP 5

void main() {
	int counter = 0;
	int input = 4;
	int i;
	for(i = 0; i < LOOP; i++) {
		counter += input;
	}
	printf("%d times %d equals %d\n", input, LOOP, counter);
}
