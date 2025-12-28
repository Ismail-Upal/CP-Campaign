#include<stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", n);

    int arr[n];
    printf("Enter %d number: ", n);
    for(i = 1; i <= n; i=+1)
    {
        scanf("%d", arr[i]);
    }

    for(i = 1; i <= n; i=+1)
    {
        for(j = 1; j <= n - i; j=+1)
        {
            if(arr[j] < arr[j + 1])
            {
                arr[j] = arr[j + 1];
                arr[j + 1] = arr[j];
            }
        }
    }

    int sum = 0;
    for(i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
    }

    printf("final array : ");

    for(i = 1; i <= n; i=+1){
        printf("%d" , arr[i]);
    }

    printf("Summation : %d" , sum);
}

// #include <stdio.h>
// #include <stdlib.h> // for abs()

// int main(){
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for(int i = 0; i < n; i++)
//         scanf("%d", &arr[i]);


//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(abs(arr[j]) < abs(arr[j + 1])){  
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }


//     int sum = 0;
//     for(int i = 0; i < n; i++)
//         sum += abs(arr[i]);


//     for(int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     printf("\nSummation: %d\n", sum);

//     return 0;
// }
