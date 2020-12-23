#include <stdio.h>

void main() {
	
	int n, max, min, i, bil[100];
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d", &bil[i]);
	}
	max = bil[0];
	min = bil[0];
	
	for(i=1; i<n; i++) {
		if(bil[i] > max) {
			max = bil[i];
		}
		
		if(bil[i] < min) {
			min = bil[i];
		}
	}
	
	printf("%d %d\n", max, min);
}
