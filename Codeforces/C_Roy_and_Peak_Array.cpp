#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n ;
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int ok = 0;
        for(int i = 0; i < n; i++){
            int lo = lower_bound(b.begin(), b.end(), a[i] - 1) - b.begin();
            // cout << lo  << endl;
            if(lo >= 2) ok = 1;
        }

        for(int i = 0; i < n; i++){
            int lo = lower_bound(a.begin(), a.end(), b[i] - 1) - a.begin();
            // cout << lo << endl;
            if(lo >= 2) ok = 1;
        }

        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}