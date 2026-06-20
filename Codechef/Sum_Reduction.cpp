#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        for(int k = 0; k < 31; k++){
            if(x & (1 << k)) mp[k]++;
        }
    }

    int ok = 1;
    for(int i = 0; i < 31; i++){
        if(mp[i] > 1) ok = 0;
    }
    if(ok) cout << "Yes\n";
    else cout << "No\n";
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