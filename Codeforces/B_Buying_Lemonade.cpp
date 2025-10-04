#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    
    sort(a.rbegin(), a.rend());
    
    long long total = 0;
    int p= 0, c=0;
    for(int i = 0; i < n; i++) {
        total += a[i];
        p+=a[i];
        c++;
        if(total>k){p--; break;}
        if(total == k) break;
    }
    
    cout << p << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
