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
        string s, t; cin >> s >> t;
        int j = 0;
        for(int i = 0; i < sz(s); i++){
            if(s[i] == '?' and j < sz(t)) s[i] = t[j], j++;
            else if(j < sz(t) and s[i] == t[j]) j++;
            else if(s[i] == '?') s[i] = 'a';
        }
        int ok = 0;
        j = 0;
        for(int i = 0; i < sz(s); i++){
            if(s[i] == t[j]) j++;
            if(j == sz(t)){
                ok = 1;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl << s << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}