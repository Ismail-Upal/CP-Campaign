#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 2e5 + 3;
ll pref[N];
ll sum(ll x){
    ll sm = 0;
    while(x > 0){
        ll r = x % 10;
        sm += r;
        x /= 10;
    }
    return sm;
}

int main()
{   
    opt();

    for(ll i = 1; i <= N; i++){
        pref[i] = pref[i - 1] + sum(i);
    }
    
    tc{
        int n; cin >> n;
        cout << pref[n] << endl;
    }
    
    return 0;
}