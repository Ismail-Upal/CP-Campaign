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
        int n, s; cin >> n >> s;
        vector<int> x(n);
        for(int i = 0; i < n; i++) cin >> x[i];

        int mn = x[0];
        int mx = x[n - 1];
        int dis = mx - mn;
        
        int more = min(abs(s - mx), abs(s - mn));

        cout << more + dis << endl;
    }
    
    return 0;
}