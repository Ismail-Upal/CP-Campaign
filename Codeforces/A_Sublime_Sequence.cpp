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
        int x, n; cin >> x >> n;
        int s = ((n + 1) / 2) * x;
        s += (-(n / 2) * x);
        cout << s << endl;
    }
    
    return 0;
}