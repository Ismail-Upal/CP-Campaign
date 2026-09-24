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
    
    string s, t; cin >> s >> t;
    int ok = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            char c = s[i - 1];

            if(find(t.begin(), t.end(), c) == t.end()){
                ok = 0; break;
            }
        }
    }
    if(ok) cout << "Yes" ;
    else cout << "No" ;
     
    return 0;
}