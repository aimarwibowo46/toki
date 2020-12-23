#include <stdio.h>

void main() {
	
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	int arr[a][b], arr2[b][a];
	for(i=0; i<a; i++) {
		for(j=0; j<b; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	
	// masukkan matriks yang sudah dirotasi ke array baru
	// tujuan : mempermudah pemberian spasi
	int x=0;
	for(i=0; i<b; i++) {
		int y=0;
		for(j=a-1; j>=0; j--) {
			arr2[x][y] = arr[j][i];
			y++;
		}
		x++;
	}
	
	for(i=0; i<b; i++) {
		for(j=0; j<a; j++) {
			if(j<a-1) {
				printf("%d ", arr2[i][j]);
			} else {
				printf("%d", arr2[i][j]);
			}
		}
		printf("\n");
	}
}
