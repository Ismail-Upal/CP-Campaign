// #include<bits/stdc++.h>
// using namespace std;
// using ll = long long;
// int main()
// {   
//     ll l, r; cin >> l >> r;
//     ll sum = 0;
//     for(ll i = l; i <= r; i++){
//         sum += i;
//     }
//     cout << sum;
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ll l, r;
//     cin >> l >> r;
    
//     ll n = r - l + 1;         

//     ll sum = n * (l + r) / 2;
    
    
//     cout << sum << endl;
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Safe printing function for __int128 (handles negative numbers correctly)
void print128(__int128 x) {
    if (x == 0) {
        cout << 0 << '\n';
        return;
    }
    if (x < 0) {
        cout << '-';
        x = -x;
    }
    string s;
    while (x > 0) {
        s.push_back('0' + (x % 10));
        x /= 10;
    }
    reverse(s.begin(), s.end());
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll L, R;
    cin >> L >> R;

    // Number of terms
    ll n = R - L + 1;

    // Use __int128 to avoid intermediate overflow
    __int128 sum = (__int128) n * (L + R) / 2;

    print128(sum);

    return 0;
}