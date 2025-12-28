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
        ll n, m; cin >> n >> m;
        ll l = max(0LL, n - m), r = n + m;

        ll ans = l | n | r;

        for(int i = 0; i < 32; i++){
            int len = (1 << i);
            if(!(l & (1 << i))and !(r & (1 << i))){
                if((l / len) != (r / len)){
                    ans |= (1 << i);
                }
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}