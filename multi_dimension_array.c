#include <stdio.h>

#define M 3
#define N 4

int main(void) {
	int B[M][N];
	int i, j;
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			B[i][j] = i+j;
		}
	}
	for (i = 0; i < M; i++){
		printf("Row %d:",i );
		for(j=0; j<N;j++){
			printf("%d ",B[i][j] );
		}
		printf("\n");
	}
return 0;
}