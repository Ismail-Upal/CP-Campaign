#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int n, x; cin >> n >> x;
    vector<int> v(n);
    map<int, vector<int>> mp;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]].push_back(i + 1);
    }
    sort(v.begin(), v.end());
    int nd, ok = 0;
    vector<int> ans;
    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            nd = x - (v[i] + v[j]);
            int l = j + 1, r = n - 1;
            while(l < r){
                if(v[l] + v[r] == nd){
                    ok = 1;
                    ans.push_back(v[l]);
                    ans.push_back(v[r]);
                    ans.push_back(v[i]);
                    ans.push_back(v[j]);
                    break;
                }
                else if(v[l] + v[r] < nd)l++;
                else r--;
            }
            if(ok) break;
        }
        if(ok) break;
        ans.clear();
    }
    if(!ok) cout << "IMPOSSIBLE" << endl;
    else{
        for(auto i : ans){
            cout << mp[i].back() << " ";
            mp[i].pop_back();
        }
    }
    
    return 0;
}