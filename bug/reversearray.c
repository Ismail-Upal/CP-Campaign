#include <stdio.h>

void swap(int a, int b){
    // you must swap without any extra variable 
}

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

    for (int i = 0; i < n; i++) 
    {
        swap(arr[i], arr[n-i]);
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);


    return 0;
}

// for christmas i got you your favourite thing..
// disappointment
