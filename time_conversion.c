#include <stdio.h>
#include <string.h>

int main() {
    int hh, mm, ss ;
    char t12[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12);
    printf("%d", hh);

    if (strcmp(t12,"PM")==0 && hh != 12) {
    	hh += 12;
    	printf("%d", hh);
    }
    if (strcmp(t12,"AM")==0 && hh==12) {
    	hh = 0 ;
    }

    printf("%02d:%02d:%02d\n", hh, mm, ss) ;
    return 0;
}