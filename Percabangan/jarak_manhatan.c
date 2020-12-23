#include <stdio.h>
#include <stdlib.h>

void main() {
	
	int x1, x2, y1, y2, a, b;
	
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	a = abs(x1-x2);
	b = abs(y1-y2);
	
	printf("%d\n", a+b);
	
}
