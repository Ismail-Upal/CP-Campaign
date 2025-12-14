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
        int n, y, r; cin >> n >> y >> r;
        int sum = r;
        n -= r;
        sum += min(y / 2, n);
        cout << sum << endl;
    }
    
    return 0;
}