#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    tc{
        int n, xr; cin >> n >> xr;
        vector<int> v(n);
        int tot_or = 0;
        for(int i = 0; i < n; i++){
            if((xr | i) == xr) v[i] = i, tot_or |= i;
            else break;
        }
        if(tot_or != xr) v[n - 1] = xr;
        for(auto i : v) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}