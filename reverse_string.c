#include <stdio.h>
#include <string.h>

int main() {
	char str1[1000],temp;
	int i,j,n;
	scanf("%d", &n);
	while(n--){
		scanf("%s", str1);
		{

		i=0;
		j = strlen(str1)-1;

		while(i< j){
			temp = str1[i];
			str1[i] = str1[j];
			str1[j] = temp;
			i++;
			j--;
		}
		printf("%s\n",str1 );
	}
}

	return 0;
}

