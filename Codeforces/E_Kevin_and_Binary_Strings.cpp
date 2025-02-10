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
        string s; cin >> s;
        int n = sz(s), z = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                z = i + 1;
                break;
            }
        }
        cout << 1 << " " << n << " " << 1 << " " << n - z + 1 << endl;
    }
    
    return 0;
}