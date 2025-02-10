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
        vector<vector<int>> v;
        vector<int> child;
        map<int, int> mp;
        for(int i = 1; i <= n - 1; i++){
            int a, b; cin >> a >> b;
            v[a].push_back(b);
            child.push_back(b);
            mp[a]++;
        }
        vector<int> del;
        for(auto i : child){
            auto it = mp.find(i);
            if(it == mp.end()){
                del.push_back(i);
            }
            if(sz(del) == 2) break;
        }
        // for(auto i : del) cout << i << endl;
        for(auto i : v){
            auto it1 = find(i.begin(), i.end(), del[0]);
            auto it2 = find(i.begin(), i.end(), del[1]);
            if(it1 != i.end()){
                i.erase(it1); 
            }
            if(it2 != i.end()){
                i.erase(it2);
            }
            // cout <<  << " :";
            for(auto j : i) cout << j << " ";
            cout << endl;
        }

        int ans = 0;
        for(auto i : v){
            ans += sz(i);
            // cout << sz(i);
        }
        // cout << ans << endl;
    }
    
    return 0;
}