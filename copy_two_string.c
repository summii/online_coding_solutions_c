#include <stdio.h>

int main() {
	char str1[1000],str2[1000];
	int i;
	printf("Enter str1\n");
	scanf("%s", str1);

	i=0;

	while(str1[i] != 0){
		str2[i] = str1[i];
		i++;
	}
	printf("COPIED STRRING IS %s\n",str2 );
}