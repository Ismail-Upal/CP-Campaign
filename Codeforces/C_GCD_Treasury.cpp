#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if(x == 1){
        cout << 0 << endl; return;
    }
    
    vector<int> fact;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            fact.push_back(i);
            while(x % i == 0) x /= i;
        }
    }
    if(x > 1) fact.push_back(x);

    ll ans = 0;
    for(auto i : fact){
        ll sum = 0;
        for(auto j : v){
            if(j % i == 0) sum += j;
        }
        ans = max(ans, sum);
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