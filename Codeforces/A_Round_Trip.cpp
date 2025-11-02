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
        int r, x, d, n; cin >> r >> x >> d >> n;
        string s; cin >> s;
        int one = 0, two = 0;
        for(auto i : s){
            if(i == '1') one++;
            else two++;
        }

        int ans = 0;
    
            if(r >= x){
                if(one){
                    ans += one;
                    r = max(r - (one * d), x - 1);
                }
                if(two and r < x){
                    ans += two; 
                }
            }
            else{
                if(two){
                    ans += two; 
                    r = min(r + (two * d), x);
                }
                if(one and r >= x){
                    ans += one;
                }
            }



        cout << ans << endl;
    }
    
    return 0;
}