#include <stdio.h>

int main() {

	int i,k,sum;
	sum =0;
	k =1;
	for(i=0; i <=20; i++){
		sum += k;
		k += 2;
	}
	printf("%d\n", sum );
return 0;

}