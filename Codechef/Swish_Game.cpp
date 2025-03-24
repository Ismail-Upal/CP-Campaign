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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int sw = count(s.begin(), s.end(), 'S');
        if(sw >= k) cout << n << endl;
        else{
            int nd = k - sw; 
            nd--;
            cout << n + nd << endl;
        }
    }
    
    return 0;
}