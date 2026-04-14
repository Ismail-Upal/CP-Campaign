#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()


void Solve(){
    int n; cin >> n;
    ll ans = 1, sum = 1;
    for(int i = 0; i < n; i++){
        ans = (1 << i) * sum;
        sum += sum;
    }
    ans /= 2;
    if(n == 1) ans = 1;
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