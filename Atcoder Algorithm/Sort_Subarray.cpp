#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n + 1);
    map<int, deque<int>> mp;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
        mp[v[i]].push_back(i);
    }

    sort(v.begin() + 1, v.end());
    int l = 1e9, r = 0;

    int ok = 1;
    for(int i = 1; i <= n; i++){
        int id = mp[v[i]].front();
            
        if(i != id){
            l = min(l, i);
            r = max(r, i);
        }
        if(abs(id - i) + 1 > k){
            ok = 0;
            break;
        }
        mp[v[i]].pop_front();
    }
    
    if(ok and r - l + 1 <= k) cout << "Yes";
    else cout << "No";
}

int main()
{   
    fast;
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}


