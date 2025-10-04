#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    char c; int n;
    int a = 0, b = 0;
    while(cin >> c >> n){
        if(c == 'A') a += n;
        else b += n;
    }
    if(a > b) cout << 'A';
    else cout << 'B';
    
    return 0;
}