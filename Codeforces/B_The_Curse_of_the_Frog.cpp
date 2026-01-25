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
        ll n, x; cin >> n >> x;
        ll zro = 0, one = 0;
        for(int i = 0; i < n; i++){
            ll a, b, c; cin >> a >> b >> c;
            zro += (b - 1) * a;
            one = max(one, (b * a) - c);
        }

        if(zro >= x) cout << 0 << endl;
        else if(!one) cout << -1 << endl;
        else{
            x -= zro;
            ll it = x / one;
            while((it * one) < x){
                it++;
            }
            cout << it << endl;
        } 
    }
    
    return 0;
}