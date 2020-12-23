#include <stdio.h>

void main() {
	
	int a, res=0;
	
	while(scanf("%d", &a) != EOF) {
		if(a>=1 && a<=1000) {
			res += a;
		}
	}
	
	printf("%d\n", res);
	
}
