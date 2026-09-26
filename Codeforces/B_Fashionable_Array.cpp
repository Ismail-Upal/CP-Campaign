#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, int> mp;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[x] == 1) v.push_back(x);
    }
    
    sort(v.rbegin(), v.rend());
    queue<int> q;
    for(auto i : v){
        mp[i]--;
        if(mp[i]) q.push(i);
    }   
    
    while(q.size()){
        int u = q.front(); q.pop();
        v.push_back(u);
        mp[u]--;
        if(mp[u]) q.push(u);
    }

    for(auto i : v) cout << i << " ";
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