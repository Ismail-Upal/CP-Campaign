#include <stdio.h>

int main() {
    int n;
    // printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    // printf("Enter %d number: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int min = 0;               

    for (int i = 0; i < n; i++) { 
        if (arr[i] > max && arr[i] == max)          
            max = arr[i];
    }

    printf("%d\n", max);            
              

    return;                                      
}
