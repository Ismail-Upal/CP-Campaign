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
        int n; cin >> n;
        string s, t; cin >> s >> t;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}