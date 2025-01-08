#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, x, k; cin >> n >> x >> k;
        string s; cin >> s;
        ll one = 0, sub = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') one++;
            else sub += one;
        }
        if(sub <= x and sub % k == 0) cout << 1 << endl;
        else cout << 2 << endl;
    }
    
    return 0;
}