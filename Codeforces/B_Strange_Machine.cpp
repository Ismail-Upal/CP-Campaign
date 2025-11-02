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
        int n, q; cin >> n >> q;
        string s; cin >> s;
    
        int b = 0;
        for(auto i : s){
            if(i == 'B') b = 1;
        }

        while(q--){
            ll a; cin >> a;
            ll ans = 0;

            if(b == 0){
                ans = a;
            }
            else{
                while(a > 0){
                    for(auto i : s){
                        if(i == 'A') a--;
                        else a /= 2;
                        ans++;
                        if(a <= 0) break;
                    }
                }
            }
            
            cout << ans << endl;
        }
    }
    
    return 0;
}