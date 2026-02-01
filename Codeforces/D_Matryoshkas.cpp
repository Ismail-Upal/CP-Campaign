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
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            while(mp[v[i]]){
                ans++;
                mp[v[i]]--;
                int k = v[i] + 1;
                while(mp[k]){
                    mp[k]--;
                    k++;
                }
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}