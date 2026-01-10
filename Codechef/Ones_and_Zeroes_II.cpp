#include <bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    opt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt1 = 0;                  
        long long swaps = 0;           
        int zeros_seen = 0;           

        for (char c : s) {
            if (c == '1') {
                cnt1++;
                swaps += zeros_seen; 
            } else {
                zeros_seen++;
            }
        }

        int max_good;
        if (cnt1 == 0) {
            max_good = 0;            
        } else {
            max_good = cnt1 + min(cnt1, n - cnt1);  
        }

        cout << max_good << " " << swaps << "\n";
    }
    return 0;
}