#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int n, m; cin >> n >> m;
        string s, t; cin >> s >> t;
        int c = 0;
        while(c <= 5){
            if(s.find(t) != -1){
                break;
            }
            else{
                s += s;
                c++;
            }
        }    
        if(c == 6) cout << -1 << endl;
        else cout << c << endl;   
    }
    
    return 0;
}