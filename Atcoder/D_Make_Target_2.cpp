#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    int l, r, d, u; 
    cin >> l >> r >> d >> u;

    long long ans = 0;

    
    int x = l;
    if(x % 2) x++;  

    while(x <= r){
        int lo = max(d, -abs(x));
        int hi = min(u, abs(x));

        if(lo <= hi) ans += (hi - lo + 1);

        x += 2;
    }

    
    int y = d;
    if(y % 2) y++;

    while(y <= u){
        int lo = max(l, -abs(y) + 1);
        int hi = min(r, abs(y) - 1);

        if(lo <= hi) ans += (hi - lo + 1);

        y += 2;
    }

    cout << ans << endl;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}