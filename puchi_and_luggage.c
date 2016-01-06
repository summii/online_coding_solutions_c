#include <stdio.h>

int main()
{
	int t,n,i,j;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int arr[n];
		for(i=0; i<n; i++){
			scanf("%d", &arr[i]);
		}
		for(i=0; i<n; i++){
			int count =0;
				for(j=i+1; j<n;j++){
					if(arr[j] < arr[i])
						count++;
				}
				printf("%d ",count );


		}
		printf("\n");


	}
	return 0;
}