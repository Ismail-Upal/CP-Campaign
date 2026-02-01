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
        int n, k, a, b; cin >> n >> k >> a >> b;
        map<pair<int, int>, int> mp;
        for(int i = 1; i <= n; i++){
            int x, y; cin >> x >> y;
            mp[{x, y}] = i;
        }
        for(auto i : mp)cout << i.second << endl;
        cout << endl;
    }
    
    return 0;
}