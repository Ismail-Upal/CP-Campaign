#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string g; cin >> g;
    map<char, int> mp;
    for(auto i : g) mp[i]++;

    string s; cin >> s;
    int ok = count(s.begin(), s.end(), '*');
    int n; cin >> n;
    while(n--){
        string t; cin >> t;
        bool ans = 1;

        if(ok){
            if(sz(s) - 1 > sz(t)) ans = 0;
            else{
                int l = 0, r = sz(t) - 1;
                for(int i = 0; s[i] != '*'; i++){
                    if(s[i] == '?'){
                        if(!mp[t[l]]) ans = 0;
                    }
                    else{
                        if(s[i] != t[l]) ans = 0;
                    }
                    l++;
                }
                for(int i = sz(s) - 1; s[i] != '*'; i--){
                    if(s[i] == '?'){
                        if(!mp[t[r]]) ans = 0;
                    }
                    else{
                        if(s[i] != t[r]) ans = 0;
                    }
                    r--;
                }

                while(l <= r){
                    if(mp[t[l]]) ans = 0;
                    l++; 
                }
            }
        }
        else{
            if(sz(s) != sz(t)) ans = 0;
            else{
                for(int i = 0; i < sz(s); i++){
                    if(s[i] == '?'){
                        if(!mp[t[i]]) ans = 0;
                    }
                    else{
                        if(s[i] != t[i]) ans = 0;
                    }
                }
            }
        }
    
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }   
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1; //cin >> t;
    for(int i = 1; i <= t; i++){
        Solve();
    }
    
    return 0;
}