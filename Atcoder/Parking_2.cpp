#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int x, y, l, r, a, b; 
    cin >> x >> y >> l >> r >> a >> b;

    int ans = 0;
    if(r <= a or b <= l) ans = (b - a) * y;
    else{
        ans += max(l - a, 0) * y;
        ans += max(b - r, 0) * y;
        
        ans += (min(r, b) - max(l, a)) * x;
    } 
    cout << ans << endl;
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