#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------


void Solve(){
    string s; cin >> s;
    int ok = 0, ch = 0;
    int n; cin >> n;
    while(n--){
        string t; cin >> t;
        if(s == t) ok = 1;
        if(s[0] == t[1]) ch |= 1;
        if(s[1] == t[0]) ch |= 2;
    }

    if(ok or ch == 3) cout << "YES";
    else cout << "NO";
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