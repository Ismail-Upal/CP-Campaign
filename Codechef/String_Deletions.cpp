#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        
        int peaks = 0;
        // Check positions 2 to N-1 (1-based indexing in problem, 0-based in code)
        for (int j = 1; j < N - 1; j++) {
            if (S[j - 1] != S[j] && S[j] != S[j + 1]) {
                peaks++;
            }
        }
        
        // Minimum length is N minus number of peaks
        cout << N - peaks << '\n';
    }
    
    return 0;
}
