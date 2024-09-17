#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	unsigned long size = 2UL * 1024 * 1024 * 1024;
	char *p, *x;
	int i, pagesize = getpagesize();
	p = (char*) malloc(size);
	x = p;
	for(i=1; i<=size/pagesize; i++) {
		*x = 'A';
		x = x + pagesize;
	}
	printf("malloc() returned: %p\n", p);
	getchar();
	return 0;
}
