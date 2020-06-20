#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void mean(int arr[], int t);
void median(int arr[], int t);
void mode(int arr[], int t);


int main() {
	
    int n;
    scanf("%d", &n);
    
    int x[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &x[i]);
    }
    
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-1 ; j++)
        {
            if(x[j]>x[j+1])
            {
                int temp        = x[j];
                x[j]    = x[j+1];
                x[j+1]  = temp;
            }
        }
    }
    
    mean(x, n);

    median(x, n);
    
    mode(x, n);
        
    return 0;
}

void mean(int arr[], int t) {
	double sum;
    for (int j=0; j<t; j++) {
        sum = sum + arr[j];
    }
    printf("%0.1lf\n", sum/t);
}


void median(int arr[], int t) {
	float median=0;
    
    if(t%2 == 0){
		median = (arr[(t-1)/2] + arr[t/2])/2.0;
		}
		
    else{
        median = arr[t/2];
		}

    printf("%0.1f\n", median);
}


void mode(int arr[], int t) {
	
	int maxValue = 0, maxCount = 0;

   for (int i = 0; i < t; ++i) {
      int count = 0;
      
      for (int j = 0; j < t; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

    printf("%d", maxValue);
}
