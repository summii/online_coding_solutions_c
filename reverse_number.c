#include <stdio.h>

int main() {
	int x=0, y=0;
	printf("Print number\n");
	scanf("%d", &x);
	while(x>0){
		y = 10*y+(x%10);
		x = (x/10);
	}
	printf("The reverse number is %d\n",y );
return 0;
}