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
        int n, k; cin >> n >> k;
        string s; cin >> s;

        auto ok = [&](int m){
            int sub = 0, one = 0, zro = 0;
            for(auto i : s){
                if(i == '0') zro++;
                else one++;;
                one = max(zro, one);
                if(one >= m){
                    sub ++;
                    one = 0, zro = 0;
                }
            }

            return sub >= k;
        };  

        int l = 1, r = n + 1, ans = -1, m;
        while(l <= r){
            m = l + (r - l) / 2;
            if(ok(m)){
                ans = m;
                l = m + 1;
            }
            else r = m - 1;
        }

        cout << ans << endl;
    }
    
    return 0;
}