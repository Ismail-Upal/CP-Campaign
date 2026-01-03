#include<stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum += last;

        // Remove the last digit
        n /= 10;
    }
    return sum;
}

int main() {
    int n = 12345;
    printf("%d", sumOfDigits(n));
    return 0;
}

// upal has come from varsity . his friend call him to 
// to go for walking . upal checks his wallet
// and says, "tk nai re. koto ache ekn . 142 tk"
// his little sister heard and says, "tumar kache 
// achd 1 .. 4 .. 2 .. sob tk ach!!e"
// how much money upal has according to his little 
// sister.