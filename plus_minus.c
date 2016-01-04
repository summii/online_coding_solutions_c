#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MAX 1000

int main() {

	int A[MAX], i, j, n;
	float sum1=0, sum2=0, sum3=0;
	scanf("%d", &n);
	for(i=0; i < n; i++){
		scanf("%d", &A[i]);
		if(A[i] >= 1){
			sum1++;
		}
		if(A[i] < 0){
			sum2++;
		}
		if(A[i] == 0){
			sum3++;
		}

	}
	printf("%.3f\n",(sum1/n));
	printf("%.3f\n",(sum2/n));
	printf("%.3f\n",(sum3/n));
	return 0;

}