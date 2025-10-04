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
        int a, b, c, d; cin >> a >> b >> c >> d;
        c -= a, d -= b;
        int ok = 1;

        if(a >= b){
            int dv = (a + (b + 1) - 1) / (b + 1);
            if(dv >= 3) ok = 0;
            else if(c >= d){
                dv = (c + (d + 1) - 1) / (d + 1);
                if(dv >= 3) ok = 0;
            }
            else if(d >= c){
                dv = (d + (c + 1) - 1) / (c + 1);
                if(dv >= 3) ok = 0;
            }
        }
        else if(b >= a){
            int dv = (b + (a + 1) - 1) / (a + 1);
            if(dv >= 3) ok = 0;
            else if(c >= d){
                dv = (c + (d + 1) - 1) / (d + 1);
                if(dv >= 3) ok = 0;
            }
            else if(d >= c){
                dv = (d + (c + 1) - 1) / (c + 1);
                if(dv >= 3) ok = 0;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}