#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        vector<int> v(n * m);
        for(int i = 0; i < n * m; i++) cin >> v[i];
        sort(v.begin(), v.end());
        if(n > m) swap(n, m);

        int mx = v.back(); 
        int mn1 = v[0], mn2 = v[1];
        ll ans1 = (mx - mn2) * (n - 1);
        ans1 += ((n * m - n) * (mx - mn1));
        // ans1 += (mn1 - mn1);

        int mx1 = v[m * n - 2];
        ll ans2 = (mx1 - mn1) * (n - 1);
        ans2 += ((n * m - n) * (mx - mn1));
        // ans2 += mx - mx;
        cout << max(ans1, ans2) << endl;
    }
    
    return 0;
}