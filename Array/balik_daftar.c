#include <stdio.h>

void main() {

	int i=0, bil[100];
	
	while(scanf("%d", &bil[i]) != EOF) {
		i++;
	}
	
	for(i=i-1; i>=0; i--) {
		printf("%d\n", bil[i]);
	}

}
