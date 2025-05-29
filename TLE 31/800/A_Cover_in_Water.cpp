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
        string s; cin >> s;
        int ok = 0, cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '.' and s[i + 1] == '.' and s[i + 2] == '.'){
                ok = 1;
            }
            if(s[i] == '.') cnt ++;
        }
        if(ok) cout << 2 << endl;
        else cout << cnt << endl;
    }
    
    return 0;
}