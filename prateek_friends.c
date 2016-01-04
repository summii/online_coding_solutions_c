#include <stdio.h>

int main() {

	int i, j, arr[1000], num[1000];
	int sum, a;
	int n, t, x;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d",&n, &x );
		for(i=0; i<n; i++){
			scanf("%d", &num[i]);
		}
		for(i=0; i<n; i++){
			arr[i] = num[i];
		}
		for(i=0; i<n; i++){
			sum=0, a=0;
			for(j=i; j<n; j++){
				sum = sum+arr[i];
			}
			if(sum ==x){
				printf("YES\n");
				a=1;
				break;
			}
		}
		if(a==1){
			break;
		}
		if(a==0){
			printf("NO\n");
		}
	}
	return 0;


}