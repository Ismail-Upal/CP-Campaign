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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] = i;
        }

        sort(v.begin(), v.end());

        int cnt = 1;

        for(int i = 1; i < n; i++){
            if(mp[v[i]] != mp[v[i - 1]] + 1) cnt++;
        }

        cerr << cnt; 
        if(k >= cnt) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}