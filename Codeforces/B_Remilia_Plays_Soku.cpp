#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    ll n, x1, x2, k; cin >> n >> x1 >> x2 >> k;
    ll ans = 0;
    int l, r;
    if(x1 > x2) swap(x1, x2);

    l = x1 + n - x2;
    r = x2 - x1;

    ans += min(l, r) + k;
    if(n <= 3) ans = 1;
    
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