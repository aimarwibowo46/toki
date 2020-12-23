#include <stdio.h>

void main() {
	
	int a;
	scanf("%d", &a);
	
	while(a%2 == 0) {
		a = a/2;
	}
	if(a == 1) {
		printf("ya\n");
	} else {
		printf("bukan\n");
	}
	
}
