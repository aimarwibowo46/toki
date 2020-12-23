#include <stdio.h>
#include <stdbool.h>

int n, k;
int catat[10];

void tulis(int deep) {
	int i;
	
	if(deep == k) {
		for(i=0; i<k; i++) {
			printf("%d", catat[i]);
			if(i<k-1) {
				printf(" ");
			}
		}
		printf("\n");
		
	} else {
		for(i=catat[deep-1]+1; i<=n; i++) {
			catat[deep] = i;
			tulis(deep + 1);		
		}
	} 
}

int main() {
	
	scanf("%d %d", &n, &k);
	tulis(0);
	
	return 0;
}
