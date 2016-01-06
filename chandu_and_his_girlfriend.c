#include <stdio.h>

void sort(long long int arr[], int start, int mid, int end){
	int p= start, q = mid+1,i;
	long long int A[end-start+1], k=0;
	for(i = start; i<= end; i++){
		if(p > mid){
			A[k++] = arr[q++];
		}
		else if( q > end){
			A[k++] = arr[p++];
		}
		else if(arr[p] > arr[q]){
			A[k++] = arr[p++];
		}
		else {
			A[k++] = arr[q++];
		}
	}
	for(i=0; i< k; i++){
		arr[start++] = A[i];
	}
	return;
}


void mergeSort(long long int arr[], int start, int end){
	if(start < end){
		int mid = (start+end)/2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid+1, end);

		sort(arr, start, mid, end);
	}
	return;
}


int main()
{
	int t;

	scanf("%d", &t);
	while(t--)

	{
		int x,i;
		scanf("%d", &x);
		long long int arr[x];
		for(i=0; i< x; i++){
			scanf("%lld", &arr[i]);
		}
		mergeSort(arr, 0, x-1);

		for(i=0; i< x; i++){
			printf("%lld ",arr[i] );
		}
		printf("\n");
	}
	return 0;
}