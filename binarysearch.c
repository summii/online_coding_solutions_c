#include <stdio.h>

int binarySearch(int arr[],int first, int last,int x){

	while(last >= first){
		int mid = first+(last-first)/2;
		if(arr[mid] == x)return mid;
		if(arr[mid] < x) first = mid+1;
		else last = mid-1;
	}
	return -1;
}

int main(void) {

	int arr[] = {3,4,5,6,8,9,10,17,32,45};
	int x;
	printf("Enter number: \n");
	scanf("%d",&x);
	int m = sizeof(arr)/sizeof(arr[0]);
	int result = binarySearch(arr,0,m-1,x);
	(result == -1)? printf("GIVEN input isn't present in array\n")
				:	printf("resent on %d\n",result );
	return 0;
}

