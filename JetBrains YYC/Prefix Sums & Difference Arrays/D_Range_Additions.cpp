#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<ll> diff(n + 2);
    for(int i = 1; i <= n; i++){
        diff[i] = v[i] - v[i - 1];
    }
    
    while(m--){
        int l, r, x; 
        cin >> l >> r >> x;

        diff[l] += x;
        diff[r + 1] -= x;
    }

    for(int i = 1; i <= n; i++){
        diff[i] += diff[i - 1];
    }

    for(int i = 1; i <= n; i++) cout << diff[i] << " ";
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