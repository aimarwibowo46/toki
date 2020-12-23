#include <stdio.h>
#include <math.h>

int fungsi(int a, int b, int k, int x) {
	int hasil, temp;
	
	hasil = abs((a*x) + b);
	
	if(k == 1) return hasil;
	
	return fungsi(a, b, k-1, hasil);
}

void main() {
	
	int a, b, k, x;
	scanf("%d %d %d %d", &a, &b, &k, &x);
	printf("%d\n", fungsi(a, b, k, x));
	
}
