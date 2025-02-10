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
        reverse(s.begin(), s.end());
        int ok = 1, n = sz(s);
        for(int i = 1; i < n - 1; i++){
            if(s[i] == '0'){
                ok = 0; break;
            }
        }
        if(s[0] == '9') ok = 0;
        if(s[n - 1] > '1') ok = 0;

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}