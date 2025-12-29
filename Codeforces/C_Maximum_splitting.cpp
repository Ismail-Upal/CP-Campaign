#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n; cin >> n;
        int f = n / 4;
        int rem = n % 4;
        int ans = -1;
        if(rem == 0) ans = f;
        if(rem == 1){
            if(f >= 2) ans = f - 2 + 1;
        }
        if(rem == 2){
            if(f >= 1) ans = f;
        }
        if(rem == 3){
            if(f >= 3) ans = f - 3 + 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}