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
    
    string s; cin >> s;
    int n; cin >> n;
    for(auto &i : s){
        if(n > 0 and i == 'T') i = 'F', n--;
    }
    if(n % 2) s[sz(s) - 1] = 'T';
    int ans = 0;
    for(auto i : s){
        if(i == 'F') ans++;
        else break;
    }
    cout << ans;
    
    return 0;
}