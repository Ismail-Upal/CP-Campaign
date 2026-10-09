#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, deque<int>> mp;
    vector<int> v;

    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        if(!mp[x].size()) v.push_back(x); 
        mp[x].push_back(i); 
    }
    sort(v.begin(), v.end());

    vector<int> ans(n + 1, -1);

    for(int i = 0; i < sz(v); i++){ 
        deque<int> idx = mp[v[i]];
        idx.push_front(0);
        idx.push_back(n + 1);
        int mx = 0; 
        for(int j = 1; j < sz(idx); j++){
            mx = max(mx, idx[j] - idx[j - 1]);
        }
    
        for(int j = mx; j <= n; j++){
            if(ans[j] == -1) ans[j] = v[i];
            else break;
        }
    }
    
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}