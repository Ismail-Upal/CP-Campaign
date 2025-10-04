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
        int n, d; cin >> n >> d;
        string s; cin >> s;
        int ok = 0;
        for(int i = 0; i < n; i++){
            int x = s[i] - '0';
            if(x < d and !ok){
                cout << d << x;
                ok = 1;
            }
            else cout << x ;
        }
        if(!ok) cout << d ;
        cout << endl;
    }
    
    return 0;
}