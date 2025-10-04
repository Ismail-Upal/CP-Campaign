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
        if(s[4] != 's'){
            // s.push_back('.');
            // for(int i = sz(s) - 2; i >= 4; i--){
            //     s[i + 1] = s[i];
            // }
            // s[4] = 's';
            s.insert(4, "s");
        }
        cout << "Case " << _ << ": " << s << endl;
    }
    
    return 0;
}