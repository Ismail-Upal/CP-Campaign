#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        int x, y; cin >> x >> y;
        for(int i = 1; i <= x / 2; i++) cout << 1 ;
        for(int i = 1; i <= y; i++) cout << 2 ;
        for(int i = 1; i <= x / 2; i++) cout << 1 ;
        cout << endl;
    }
    
    return 0;
}