#include <stdio.h>
//How will you find out the number of occurrences of a particular character in a string?
#include <string.h>

int main() {
	char str[1000], str1;
	int i, count =0;
	printf("Enter the string\n");
	scanf("%s", str);
	printf("Enter characcter\n");
	int n = strlen(str)-1;
	scanf("%s", &str1);
	for(i=0; i< n; i++){
		if(str[i] == str1 ){
			count++;
		}
	}
	printf("character is present %d\n",count );
	return 0;
}