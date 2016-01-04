#include <stdio.h>
#define MAX 1000

int main(){
    int t,i,j,n,k, a[MAX]; 
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%d %d",&n,&k);
        for(j = 0; j < n; j++){
           scanf("%d",&a[j]);
           if(a[j] <=0){
           	k--;
           }
           //printf("%d\n",count );
        }
    	if(k <= 0){
    	printf("NO\n");
    	}
    	else{
    		printf("YES\n");
    	}
    }
}