#include <stdio.h>

int main() {
	int arr[6] = {2,3,5,4,6,7};
	int i,sum =0;

	for(i=2; i<=4; i++){
		sum += arr[i];
	}
	printf("The sum between 2 an4 elements is %d\n",sum );
	return 0;
}