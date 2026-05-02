#include<bits/stdc++.h>
using namespace std;

#define fast {ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
#define ll long long
#define endl '\n'
#define sz(x) (ll)(x).size()



void Solve(){
    int l, r; cin >> l >> r;
    int diff = 0, ans = l;
    for(int i = l; i <= min(r, l + 100); i++){
        string s = to_string(i);
        int mx = -1, mn = 1e9;
        for(auto j : s){
            mx = max(mx, j - '0');
            mn = min(mn, j - '0');
        }       
        if(mx - mn > diff){
            diff = mx - mn;
            ans = i;
        }
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