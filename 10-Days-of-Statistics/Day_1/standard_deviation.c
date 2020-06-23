#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum=0,mean=0;
    for (int j=0; j<n; j++) {
        sum = sum + arr[j];
    }
    mean = sum/n;

    double arr2[n];
    double sum2;

    for (int k=0; k<n; k++) {
        arr2[k] = pow(arr[k] - mean, 2);
        sum2 = sum2 + arr2[k];
    }

    double sd=0;
    sd = sqrt(sum2/n);    
    printf("%0.1lf", sd);


    return 0;
}

