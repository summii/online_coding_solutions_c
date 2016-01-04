#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
	char str[MAX],i;
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("%s", str);
		for(i=0; i< strlen(str); i++){
			if(str[i] == str[i+1]){
			str[i] = '0';
		}

	}
	for(i=0; i< strlen(str); i++){
		if(str[i] != '0'){
			printf("%c",str[i] );
		}
	}
	printf("\n");
  }
  return 0;
}