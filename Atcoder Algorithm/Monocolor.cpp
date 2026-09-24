#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<int> mp(n + 1, 0);
    int mx = 0;
    for(int i = 1; i <= n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[x] > mp[mx]){
            mx = x;
        }
    }
    
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(i != mx) ans += mp[i];
    }
    cout << ans ;
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