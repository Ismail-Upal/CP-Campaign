#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; int b; cin >> s >> b;
        if(s[0] == '-') s.erase(s.begin());
        b = abs(b);
        ll ans = 0;
        for(auto i : s){
            int n = i - '0';
            ans = (1LL * ans * 10 % b + n) % b;
        } 
        cout << "Case " << _ << ": ";
        if(ans == 0) cout << "divisible" << endl;
        else cout << "not divisible" << endl;
    }

    
    return 0;
}