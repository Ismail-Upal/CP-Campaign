#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<int, set<char>> mp;

    int ans = 1;
    for(int i = k, j = 0; i < n; i++, j++){
        mp[j].insert(s[i]);
    }

    int l = 0, r = 1;
    while(r + k < n){
        if(mp[l].find(s[l]) == mp[l].end() or mp[r].find(s[r + k]) == mp[r].end()) ans++;
        mp[l].insert(s[l]);
        mp[r].insert(s[r + k]);
        l++, r++;
    }

    for(int i = 0; i < n - k; i++){
        if(mp[i].find(s[i]) == mp[i].end()) ans++;
    }

    cout << ans << endl;
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

