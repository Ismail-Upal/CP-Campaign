#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        int ans = 0, ok = 0;
        for(auto i : s){
            if(!ok and i == '1') ans++, ok = 1;
            else if(i == '0') ok = 0;
        }
        cout << ans << endl;
    }
    
    return 0;
}