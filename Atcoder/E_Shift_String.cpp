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
        string s, t; cin >> s >> t;
        
        string S = s + s;
        int pos = S.find(t);
        if (pos == string::npos || pos >= (int)s.size()) cout << -1;
        else cout << pos;
        cout << endl;
    }
    
    return 0;
}