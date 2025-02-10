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
        int n, k; cin >> n >> k;
        vector<int> v;
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        int ans = 0;
        for(auto i : mp){
            v.push_back(i.second);
        }
        sort(v.begin(), v.end());

        for(int i : v){
            if(i <= k) k -= i;
            else ans++;
        }
      
        cout << max(1, ans) << endl;
    }
    
    return 0;
}