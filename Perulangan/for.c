#include <stdio.h>

void main() {
	
	int i, n, x, res=0;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &x);
		res += x;
	}
	printf("%d\n", res);
	
}
