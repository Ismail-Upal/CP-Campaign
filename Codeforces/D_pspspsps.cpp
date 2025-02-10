#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        string st; cin >> st;
        int p = 0, s = 0;
        if(st[0] == 's') st[0] = '.';
        if(st[n - 1] == 'p') st[n - 1] = '.';
        for(auto i : st){
            if(i == 'p') p = 1;
            if(i == 's') s = 1;
        }
        if(p and s) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}