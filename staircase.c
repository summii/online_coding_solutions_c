#include <stdio.h>

int main() {
	int i,n, hash, space;
	scanf("%d", &n);
	for(i=0; i< n; i++){
		space = (n-1)-i;
		hash = i+1;
		while(space != 0){
			printf(" ");
			space--;
		}
		while(hash != 0){
			printf("#");
			hash--;
		}
	printf("\n");
	}
	return 0;
}