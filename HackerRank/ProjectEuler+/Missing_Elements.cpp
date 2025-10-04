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
        int n; cin >> n;
        map<int, int> mp;
        int q = n;
        while(q--){
            int a; cin >> a;
            mp[a]++;
        }
        cout << n - sz(mp) << endl;
    }
    
    return 0;
}