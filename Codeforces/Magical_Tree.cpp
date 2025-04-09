#include<stdio.h>


int main()
{   
    int n; scanf("%d", &n);
    int spc = 5 + (n / 2), star = 1, line = spc + 1;
    for(int i = 1; i <= line; i++){
        for(int j = 1; j <= spc; j++){
            printf(" ");
        }
        for(int k = 1; k <= star; k++){
            printf("*");
        }
        printf("\n");
        spc--;
        star += 2;
    }
    
    for(int i = 1; i <= 5; i++){
        for(int i = 1; i <= 5; i++){
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}