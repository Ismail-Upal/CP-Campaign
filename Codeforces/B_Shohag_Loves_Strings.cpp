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
        int ok = 0;
        for(int i = 0; i < sz(s) - 1; i++){
            if(s[i] == s[i + 1]){
                ok = 1;
                cout << s[i] << s[i + 1] << endl;
                break;
            }
            else if(i < sz(s) - 2 and s[i] != s[i + 1] and s[i + 1] != s[i + 2] and s[i] != s[i + 2]){
                ok = 1;
                cout << s[i] << s[i + 1] << s[i + 2] << endl;
                break;
            }
        }
        if(!ok) cout << -1 << endl;
    }
    
    return 0;
}