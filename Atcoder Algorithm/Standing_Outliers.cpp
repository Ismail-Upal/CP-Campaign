#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, d; cin >> n >> d;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<ll> ans;
    for(int i = 0; i < n; i++){
        int ok = 1;
        for(int j = 0; j < n; j++){
            if(i != j){
                if(abs(v[i] - v[j]) < d) ok = 0;
            }
        }
        if(ok){
            ans.push_back(i + 1);
        }
    }
    cout << sz(ans) << endl;
    for(auto i : ans) cout << i << " ";
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