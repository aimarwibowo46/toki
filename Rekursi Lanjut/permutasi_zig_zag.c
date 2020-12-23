#include <stdio.h>
#include <stdbool.h>

int N;
int catat[10];
bool cek[10] = {false};

void tulis(int kedalaman) {
	int i;
	if(kedalaman == N) {
		
		int zigzag = 1;
		if(N >= 3) { // Jika jumlah digit 1 atau 2 tidak perlu dicek
			for(i=1; i<N-1; i++) {
				if((catat[i] < catat[i-1] && catat[i] < catat[i+1]) || 
				(catat[i] > catat[i-1] && catat[i] > catat[i+1])) {
					zigzag = 1;
				} else {
					zigzag = 0;
					break;
				}
			}
		}
		
		if(zigzag == 1) {
			// Cetak password
			for (i = 0; i < N; i++) {
				printf("%d", catat[i]); // Cetak
			}
			printf("\n");
		}
	
	} else {
		// Masuk ke lapisan lebih dalam
		for (i = 1; i <= N; i++) {
			if(!cek[i]) {
				cek[i] = true;
				catat[kedalaman] = i; // Catat di sini
				tulis(kedalaman + 1);
				cek[i] = false;
			}
		}
	}
}

int main() {
	
	scanf("%d", &N);
	tulis(0);
	
	return 0;
}
