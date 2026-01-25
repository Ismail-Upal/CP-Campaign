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
        ll n, k; cin >> n >> k;
        int ok = 0, cnt = 0;
        if(n == k){
            cout << 0 << endl; 
            continue;
        }
        
        while(n > 1){
            cnt++;
            ll a = n / 2;
            ll b = (n + 1) / 2;
            if(a == k or b == k){
                ok = 1; break;
            }
            
            if(a % 2) n = a;
            else if(b % 2) n = b;
            else n = a;
        }

        if(ok) cout << cnt << endl;
        else cout << -1 << endl; 
    }
    
    return 0;
}