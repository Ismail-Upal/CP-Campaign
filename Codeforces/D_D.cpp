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
        vector<int> v(n), b(n);
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            se.insert(v[i]);
        }
        b = v;
        sort(b.rbegin(), b.rend());
        if(b == v and sz(se) == n) cout << "NO" << endl;
        else cout << "YES" << endl;        
    }
    
    return 0;
}