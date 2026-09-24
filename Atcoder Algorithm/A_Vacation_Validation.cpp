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
    
    int n, l, r; cin >> n >> l >> r;
    string s; cin >> s;
    int ans = 1;
    for(int i = l - 1; i <= r - 1; i++){
        if(s[i] != 'o') ans = 0;
    }
    if(ans) cout << "Yes" ;
    else cout << "No" ;
    
    return 0;
}