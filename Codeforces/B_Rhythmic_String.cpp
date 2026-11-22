#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> v;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[x] == 1) v.push_back(x);
    }

    sort(v.begin(), v.end());
    int ans = 1e9;

    for(int i = 0; i < sz(v); i++){
        int del = 0;
        for(int j = 0; j < sz(v); j++){
            if(v[j] % v[i]) del += mp[v[j]];
        }

        ans = min(ans, del);
    }

    cout << ans << endl;
}

int main()
{   
    fast;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){;
        Solve();
    }
    
    return 0;
}