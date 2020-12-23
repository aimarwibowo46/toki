#include <stdio.h>

int rekursi(int x) {
	if(x == 1) return x;
	
	if(x%2 == 0) {
		return (x/2) * rekursi(x-1);
 	} else {
 		return x * rekursi(x-1);
	}
}

void main() {
	
	int n;
	scanf("%d", &n);
	printf("%d\n", rekursi(n));
	
}
