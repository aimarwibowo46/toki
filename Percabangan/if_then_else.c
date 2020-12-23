#include <stdio.h>

void main() {
	
	int a;
	scanf("%d", &a);
	
	if(a==0) {
		printf("nol\n");
	} else if(a>0) {
		printf("positif\n");
	} else {
		printf("negatif\n");
	}
	
}
