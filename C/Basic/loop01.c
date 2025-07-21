#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	//초기값
	int i = 100;

	while (i >= 0) {
		printf("%d\n", i);
		i--; //i-=1; 다같음
		     //i=i-1;

	}

	return 0;
}
