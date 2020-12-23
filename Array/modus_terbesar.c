#include <stdio.h>

void main() {
	
	int n, i, j, arr[100000], count[1001]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &arr[i]);
		count[arr[i]]++;
	}
	
	int max=0;
	for(j=1; j<=1000; j++) {
		if(count[j] >= max) {
			max = count[j];
		}
	}
	
	int temp=0;
	for(j=1; j<=1000; j++) {
		if(max == count[j]) {
			temp = j;
		}
	}
//	printf("%d\n", max);
	printf("%d\n", temp);
	
}
