#include <stdio.h>

int main(void){
	int myArray[] = {1,23,17,4,-5,100}, *ptr, i;
	ptr = &myArray[0];
	printf("\n\n");
	for(i=0; i <6; i++){
		printf("myArray[%d] = %d", i, myArray[i]);
		printf("Contents in address ptr+%d = %d\n",i, *(ptr+i));

	}
	return 0;
}