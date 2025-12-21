#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        char pre = 'a';
        for(auto i : s){
            if(i != 'I'){
                pre = i; break;
            }
        }
        for(auto &i : s){
            if(i == 'I') i = pre;
            else pre = i; 
        }

        ll cnt = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == s[i + 1]) cnt++;
        }

        ll ans = cnt * k;
        if(s[0] == s[n - 1]) ans += k - 1;

        cout << ans << endl;
    }
    
    return 0;
}