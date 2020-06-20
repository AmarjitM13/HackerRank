#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n = 5;
    scanf("%d", &n);
    
    float x[n];
    float w[n];
    float multiply = 0, sum = 0, weights = 0;
    float mean = 0;

    for (int i=0; i<n; i++) {
        scanf("%f", &x[i]);
    }
    
    for (int j=0; j<n; j++) {
        scanf("%f", &w[j]);
        weights = weights + w[j];
    }
    
    for (int k=0; k<n; k++) {
        multiply = x[k]*w[k];
        sum = sum + multiply;
    }
    
    mean = sum/weights;
    
    printf("%0.1f\n", mean);
   
    return 0;
}

