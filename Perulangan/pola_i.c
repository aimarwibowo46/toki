#include <stdio.h>

void main() {
	
	int a, b, i;
	scanf("%d %d", &a, &b);
	for(i=1; i<=a; i++) {
		if(i%b == 0) {
			printf("*");
		} else {
			printf("%d", i);
		}
		
		if(i!=a) {
			printf(" ");
		} 
	}
	printf("\n");
	
}
