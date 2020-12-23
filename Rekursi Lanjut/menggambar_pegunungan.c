#include <stdio.h>

void gambar(int n) {
	
	int i;
	if(n == 1) {
		printf("*\n");
	} else {
		gambar(n-1);
		for(i=1; i<=n; i++) {
			printf("*");
		}
		printf("\n");
		gambar(n-1);
	}
}

void main() {
	
	int n;
	scanf("%d", &n);
	gambar(n);
	
}
