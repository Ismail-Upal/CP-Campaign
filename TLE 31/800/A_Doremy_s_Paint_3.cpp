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
        map<int, int> mp;
        int a = 0, b = 0;
        for(int i = 0; i < n; i ++){
            cin >> v[i];
            mp[v[i]]++;
            if(a == 0) a = v[i];
            if(v[i] != a) b = v[i];
        }
        if(sz(mp) > 2) cout << "No" << endl;
        else if(sz(mp) == 2){
            if(abs(mp[a] - mp[b]) <= 1) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        else cout << "Yes" << endl;
    }
    
    return 0;
}