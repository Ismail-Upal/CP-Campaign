#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int n; cin >> n;
    vector<vector<int>> v(n);
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        vector<int> tmp(m);
        for(int j = 0; j < m; j++){
            cin >> tmp[j];
        }
        reverse(tmp.begin(), tmp.end());
        map<int, int> mp;
        for(int j : tmp){
            if(!mp[j]) v[i].push_back(j), mp[j] = 1;
        }
    }

    sort(v.begin(), v.end());

    map<int, int> mp;
    vector<int> ans;
    vector<int> used(n, 0);

    for(int i = 0; i < n; i++){
        int best = -1;
        for(int j = 0; j < n; j++){
            if(!used[j]){
                if(best == -1) best = j;
                else{
                    if(v[j] < v[best]) best = j;
                }
            }
        }
        if(best == -1) break;
        used[best] = 1;

        for(int j : v[best]){
            ans.push_back(j);
            mp[j] = 1;
        }
        
        for(int j = 0; j < n; j++){
            if(used[j]) continue;
            vector<int> tmp;
            for(int k : v[j]){
                if(!mp[k]) tmp.push_back(k);
            }
            v[j] = tmp;
        }
    }

    for(int i : ans) cout << i << " ";
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}