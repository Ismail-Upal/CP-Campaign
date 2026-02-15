#include <iostream>
#include <vector>

using namespace std;

// Function to calculate sum of digits
long long digit_sum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void solve() {
    long long x;
    cin >> x;
    
    int ans = 0;
    // We only need to check y in the range [x, x + 100]
    // because d(y) cannot exceed 90 for numbers around 10^9.
    for (long long y = x; y <= x + 100; ++y) {
        if (y - digit_sum(y) == x) {
            ans++;
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    
    return 0;
}