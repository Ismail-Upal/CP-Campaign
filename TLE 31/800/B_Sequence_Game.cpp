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
        vector<int> v(n), ans;
        for(int i = 0; i < n; i++) cin >> v[i];
        
        ans.push_back(v[0]);
        for(int i = 1; i < n; i++){
            if(v[i] < v[i - 1]) ans.push_back(v[i]);
            ans.push_back(v[i]);
        }
        cout << sz(ans) << endl;
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
    
    return 0;
}