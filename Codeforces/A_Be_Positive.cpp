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
        int mn = 0, mx = 0, zr = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == -1) mn++;
            if(x == 0) zr++;
        }

        int ans = (mn % 2) * 2;
        cout << ans + zr << endl;
    }
    
    return 0;
}