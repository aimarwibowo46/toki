#include <stdio.h>

void main() {
	
	int a, b, c, i, j, k;
	scanf("%d %d %d", &a, &b, &c);
	int mat1[a][b], mat2[b][c], mat3[a][c];
	
	for(i=0; i<a; i++) {
		for(j=0; j<b; j++) {
			scanf("%d", &mat1[i][j]);
		}
	}
	
	for(j=0; j<b; j++) {
		for(k=0; k<c; k++) {
			scanf("%d", &mat2[j][k]);
		}
	}
	
	for(i=0; i<a; i++) {
		for(k=0; k<c; k++) {
			mat3[i][k] = 0;
		}
	}
	
	for(i=0; i<a; i++) {
		for(j=0; j<b; j++) {
			for(k=0; k<c; k++) {
				mat3[i][k] += mat1[i][j] * mat2[j][k]; 
			}
		}
	}
	
	for(i=0; i<a; i++) {
		for(k=0; k<c; k++) {
			if(k < c-1) {
				printf("%d ", mat3[i][k]);
			} else {
				printf("%d", mat3[i][k]);
			}
		}
		printf("\n");
	}
	
}
