#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MAX 1000

int main() {

	int A[MAX][MAX],i,n,m, sum1=0, sum2=0;
	scanf("%d", &n);
	for(i=0; i< n; i++){
		for(m=0; m<n; m++){
			scanf("%d",&A[i][m]);
			if(i == m){
				sum1 += A[i][m];
			}
			if(i+m == n-1){
				sum2+= A[i][m];
			}

		}
	}
	printf("%d\n", abs(sum1-sum2));
	return 0;
}