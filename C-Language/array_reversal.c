#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i=0;i<n; i++) {
        scanf("%d", &arr[i]);
        scanf("\n");
    }
    
    int temp;
    int start =0;
    int end = n-1; 
    while (start < end) 
    { 
        temp = arr[start];    
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    }

    for (int j=0; j<n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}

