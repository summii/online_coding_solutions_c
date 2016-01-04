#include <stdio.h>

int  main(){
	//int arr[6];
	int i, j; // declaring array of size 6
	int arr[6] = { 2,3,5,4,6,7 };   // initializing array
	//char A[3][2]; // declaring 2D array
	char A[3][2] = {{'P','I'},{'S','T'},{'X', 'Y'}};
	printf("third element in %d is\n",arr[2] );

	//printing all the elements of arr
	for(i=0; i< 6; i++)
		printf("%d\n",arr[i] );
	printf("\n");
    
    printf("Printing all elements of arr[][] are: \n");
    for(i=0; i<3; i++){
    	for(j=0; j<2; j++){
    		printf("%c\n",A[i][j]);
    	}
    printf("\n");
    }
    return 0;


}