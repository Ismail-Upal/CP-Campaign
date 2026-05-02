#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()

string s;
ll dp[20][2];
ll rec(int pos, bool tight){
    if(pos == s.size()) return 0;

    int up = tight ? (s[pos] - '0') : 9;
    ll ans = 0, cnt = 0;
    for(int d = 0; d <= up; d++){
        cnt += rec(pos + 1, tight && (d == up)) + 1;
    }

    return ans;
}

ll f(ll n){
    s = to_string(n);
    return rec(0, 1);
}

void Solve(){
    ll l, r; cin >> l >> r;
    
    cout << f(r) << endl;
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