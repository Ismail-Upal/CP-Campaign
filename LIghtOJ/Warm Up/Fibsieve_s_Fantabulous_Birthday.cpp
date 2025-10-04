#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------
const int N = 1e7;
int step[N];
int32_t main()
{   
    opt();
    
    tc{
        ll s; cin >> s;
        ll step = sqrt(s);
        if(step * step == s) step--;
        ll i, r, c;
        i = ((step + 1) * (step + 1)) - step;
        // cout << i << endl;
        if(step % 2){
            if(s < i){
                r = step + 1;
                c = s - (i - step) + 1;
            }
            else{
                c = step + 1;
                r = i + step - s + 1;
            }
        }
        else{
            if(s > i){
                r = step + 1;
                c = i + step - s + 1;
            }
            else{
                c = step + 1;
                r = s - (i - step) + 1;
            }
        }
        cout << "Case " << _ << ": " << c << " " << r << endl;
    }
    
    return 0;
}