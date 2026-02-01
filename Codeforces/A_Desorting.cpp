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
        int n; cin >> n;
        vector<int> v(n);
        int ok = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(!is_sorted(v.begin(), v.end())) cout << 0 << endl;
        else{
            int ans = INT_MAX;
            for(int i = 0; i < n - 1; i++){
                int c = v[i + 1] - v[i];
                ans = min(c, ans);
            }
            cout << (ans / 2) + 1 << endl;
        }
    }
    
    return 0;
}