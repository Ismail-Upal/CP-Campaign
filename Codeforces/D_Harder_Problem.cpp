#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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
        vector<int> v(n), ans(n), left;
        map<int, int> mp, mp2;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        for(int i = 1; i <= n; i++){
            if(mp[i] == 0) left.push_back(i);
        }
        int j = 0;
        for(int i = 0; i < n; i++){
            if(mp2[v[i]] == 0) ans[i] = v[i], mp2[v[i]]++;
            else ans[i] = left[j], j++;
        }
        for(int i = 0; i < n; i++) cout << ans[i] << ' ';
        cout << endl;
    }
    
    return 0;
}