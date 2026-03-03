#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void solve() {
    int n;
    if (!(cin >> n)) return;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n <= 2) {
        cout << 0 << endl;
        return;
    }
    
    sort(a.begin(), a.end());
    
    int max_len = 2;
    for (int i = 0; i < n - 2; i++) {
        ll sum = 1LL * a[i] + a[i+1];
    
        auto it = lower_bound(a.begin() + i + 2, a.end(), sum);
        int k = distance(a.begin(), it);

        max_len = max(max_len, k - i);
    }
    
    cout << n - max_len << endl;
}


int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
    
    return 0;
}