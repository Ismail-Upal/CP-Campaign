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
        int ok = 1;

        for(char c = 'a'; c <= 'z'; c++){
            int evn = 0, odd = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == c){
                    if(i % 2) odd++;
                    else evn++;
                }
            }
            if(evn > 0 and odd > 0){
                ok = 0; break;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}