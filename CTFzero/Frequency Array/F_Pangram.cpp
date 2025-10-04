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
    
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for(auto i : s){
        if(i >= 'A' and i <= 'Z') i += 32;
        mp[i]++;
    }
    int ans = 1;
    for(char i = 'a'; i <= 'z'; i++){
        if(!mp[i]) ans = 0;
    }

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}