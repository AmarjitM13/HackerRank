#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    int fd,sum, r;
    scanf("%d", &n);
    fd=n/10000;

    while (n>10) {
    r=n%10;
    n=n/10;
    sum=sum+r;
    }
    sum=sum+fd;
    printf("%d",sum);

    return 0;
}

