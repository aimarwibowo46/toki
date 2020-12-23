#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrom(char str[], int i, int x) {
	if(i == x||(i == x-1 && str[i] == str[x])) return true;
	
	if(str[i] != str[x]) {
		return false;
	} else return palindrom(str, i+1, x-1);
}

void main() {
	
	char str[101];
	gets(str);
	int n = strlen(str);
	if(palindrom(str, 0, n-1)) {
		printf("YA\n");
	} else {
		printf("BUKAN\n");
	}
//	printf("%d", n);
 	
}
