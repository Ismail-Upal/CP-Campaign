#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        int ans = sz(s);
        for(int i = 0; i < sz(s) - 1; i++){
            if(s[i] == s[i + 1]){
                ans = 1; break;
            }           
        }
        cout << ans << endl; 
    }
    
    return 0;
}