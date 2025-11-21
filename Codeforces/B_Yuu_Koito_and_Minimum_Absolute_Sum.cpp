#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;

int main() {   
    opt();
    
    tc{
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        if(a[0] == -1 && a[n-1] == -1) {
            a[0] = 0, a[n-1] = 0;
        }
        else if(a[0] == -1) {
            a[0] = a[n-1];
        }
        else if(a[n-1] == -1) {
            a[n-1] = a[0];
        }
        for(int i = 1; i < n-1; i++) {
            if(a[i] == -1) a[i] = 0;
        }

        ll ans = 0;
        for(int i = 1; i < n; i++) ans += a[i] - a[i - 1];
        cout << abs(ans) << endl;
        for(auto i : a) cout << i << " ";
        cout << endl;
    }
    return 0;
}
