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
        if(n % 2){
            cout << 0 << endl; continue;
        }
        if(n < 10){
            cout << -1 << endl; continue;
        }
        
        int ans = 3, sum = 0, odd = 0;
        string s = to_string(n);
        for(auto i : s){
            if((i - '0') % 2){
                odd++;
            }
            sum += i - '0'; 

            ll m = n - (i - '0');
            string t = to_string(m);
            for(auto j : t){
                if((j - '0') % 2) ans = 2;
            }
        }

        if(sum == 1 or odd or ans == 1){
            cout << 1 << endl;
        }
        else cout << ans << endl;
    }
    
    return 0;
}