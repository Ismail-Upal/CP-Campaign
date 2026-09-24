#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n; cin >> n;
    vector<ll> v(n), suff(n + 1, 0);
    ll x = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        x ^= v[i];
    }
    
    if(x == 0){
        cout << "YES" << endl; 
        return;
    }

    int ok = 0;
    ll L = 0, l = -1;
    for(int i = 0; i < n; i++){
        L ^= v[i];
        if(L == x){
            l = i;
            break;
        }
    }
    ll R = 0, r = -1;
    for(int i = n - 1; i >= 0; i--){
        R ^= v[i];
        if(R == x){
            r = i;
            break;
        }
    }

    if(l < r) cout << "YES" << endl;
    else cout << "NO" << endl; 
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