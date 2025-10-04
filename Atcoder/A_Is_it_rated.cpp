#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    int r, x; cin >> r >> x;
    if(x == 1){
        if(r >= 1600 and r <= 2999) cout << "Yes";
        else cout << "No";
    }
    else{
        if(r >= 1200 and r <= 2399) cout << "Yes";
        else cout << "No" ;
    }
    
    return 0;
}