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
        int n, m; cin >> n >> m;
        vector<int> v(m);
        for(int i = 0; i < m; i++) cin >> v[i];

        vector<int> ans(n + 1, -1);

        map<int, int> mp;

        int time = 1, idx = n;

        for(int i = 0; i < m; i++){
            if(mp.find(v[i]) != mp.end()) time++;
            else{
                ans[idx] = time;
                time++;
                idx--;
                mp[v[i]]++;
                if(idx == 0) break;
            }
        }
        for(int i = 1; i <= n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    
    return 0;
}