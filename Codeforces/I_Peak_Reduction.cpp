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
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        if((v[0] == 1 and v[n - 1] == 2) or (v[0] == 2 and v[n - 1] == 1)){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}