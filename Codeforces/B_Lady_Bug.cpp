#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string s, t; cin >> s >> t;
        int ok = 0;
        for(int i = 0; i < n - 1; i++){
            if(t[i] == t[i + 1]) ok = 1;
        }
        if(!ok){
            for(int i = 0; i < n; i++){
                if(s[i] == '1' and t[i + 1] == '0') ok = 1;
                if(s[i] == '1' and i > 0 and t[i - 1] == '0') ok = 1;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}