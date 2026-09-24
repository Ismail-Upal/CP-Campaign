#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll ans = 0;
    map<int, int> mp;
    int i = 0, j = 0;
    while(i < n){
        mp[v[j]]++;
        while(i < n and (mp[v[j]] > 1 or j == n)){
            ans += j - i;
            mp[v[i]]--;
            i++;
        }
        j++;
    }
    cout << ans;
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