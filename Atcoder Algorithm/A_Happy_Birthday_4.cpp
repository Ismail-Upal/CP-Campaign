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
    
    int x, y, z; cin >> x >> y >> z;
    if(((y * z) - x) % (1 - z) == 0 and (y * z) <= x) cout << "Yes";
    else cout << "No";
    
    return 0;
}