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
    
    string s, t; cin >> s >> t;
    map<char, int> mp1, mp2;
    reverse(t.begin(), t.end());
    for(int i = 1; i < sz(s); i++){
        if(!mp1[s[i]]) mp1[s[i]] = i;
    }
    for(int i = 1; i < sz(t); i++){
        if(!mp2[t[i]]) mp2[t[i]] = i;
    }
    char mn = '-';
    for(int i = 0; i < 26; i++){
        if(mp1['a' + i] and mp2['a' + i]){
            if(mn == '-') mn = 'a' + i;
            else{
                int s1 = mp1[mn] + mp2[mn];
                int s2 = mp1['a' + i] + mp2['a' + i];
                if(s2 <= s1){
                    mn = 'a' + i;
                }
            }
        }
    }
    if(mn == '-') cout << -1;
    else{
        string ans; ans += s[0];
   
        for(int i = 1; s[i] != mn; i++) ans += s[i];
        for(int i = mp2[mn]; i >= 0; i--) ans += t[i];
        cout << ans ;
    }

    return 0;
}