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
        ll n, l, r, k; cin >> n >> l >> r >> k;
        if(n % 2){
            cout << l << endl; continue;
        }

        int ok = 1;
        int lo, hi;
        for(int i = 31; i >= 0; i--){
            if(l & (1 << i)){
                lo = i; break;
            }
        }
        for(int i = 31; i >= 0; i--){
            if(r & (1 << i)){
                hi = i; break;
            }
        }
        if(lo == hi or n == 2){
            cout << -1 << endl; continue;
        }
        
        if(k <= n - 2){
            cout << l << endl;
        }
        else{
            cout << (1 << (lo + 1)) << endl;
        }
    }
    
    return 0;
}