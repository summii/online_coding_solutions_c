#include <stdio.h>

int main() {
	int temp, u, v;
	printf("Enter number:");
	scanf("%d", &u);
	printf("Enter smaller numer:");
	scanf("%d", &v);
	while(v !=0){
		temp = u%v;
		u = v;
		v = temp;
	}
	printf("GCD id %d",u );
return 0;
}