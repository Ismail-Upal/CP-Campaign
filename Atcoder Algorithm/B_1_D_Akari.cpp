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
    
    string s, t; cin >> s;
    t = s;
    int nd = 0;
    for(int i = 0; i < sz(s); i++){
        if(s[i] == '#'){
            if(nd) nd--;
            continue;
        }
        if(s[i] == '.' and nd == 0) t[i] = 'o', nd++;
    }
    cout << t;
    
    return 0;
}