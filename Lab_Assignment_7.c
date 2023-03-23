#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n){
    int counter = 0;
    int i, j, temp;
   
    for (i = 0; i < n - 1; i++){
        
        counter = 0;
        
        printf("Iteration #%d ", i+1);
        
        for (j = 0; j < n - i - 1; j++){
              
              if (arr[j] > arr[j + 1]){ 
                
                  temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
                  counter++;
            
              }
          }
        
        printf("%d \n", counter);
    
    }
}

void main(){
    
    int arr[9] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    bubbleSort(arr, 9);

    return;
}