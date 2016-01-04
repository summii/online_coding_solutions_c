#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n
    long long int i, result =0; 
    scanf("%d",&n);
    long long int arr[1000];
    for(i = 0; i < n; i++)
       scanf("%lli",&arr[i]);
       for(i = 0; i < n; i++)
        result = result+arr[i];
        printf("%lli\n",result);

    return 0;
}