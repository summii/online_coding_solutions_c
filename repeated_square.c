#include <stdio.h>

int main()
{
	int data[] = {3,4,5,6,8,9,10,17,32,45};
	int n,m,key;
	m = sizeof(data)/sizeof(data[0]);
	printf("Enter number: \n");
	scanf("%d",&key);
	for(n=0; n < m; n++){
		if(data[n] == key){
			printf("%d present on index %d\n",key, n);
		}
	}
return 0;

}