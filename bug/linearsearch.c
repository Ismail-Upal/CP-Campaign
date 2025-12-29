#include <stdio.h>
#include <stdlib.h>

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

    int key;
    scanf("%d", &key);

    int found;
    int sum, index;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {     
            found = 1;
            index = i + 1;     
            continue;               
        }
    }
    
    sum = abs(key) + index;

    if (!found)
        printf("Not Found\n");
    else
        printf("Found, Sum: %d\n", sum);

    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;
//     // printf("Enter number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     // printf("Enter %d number: ", n);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int key;
//     scanf("%d", &key);

//     int found = 0;
//     int sum = 0;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] == key) {     
//             found = 1;
//             sum = key + i + 1;     
//             break;               
//         }
//     }

//     if (found)
//         printf("Found, Sum: %d\n", sum);
//     else
//         printf("Not Found\n");

//     return 0;
// }
