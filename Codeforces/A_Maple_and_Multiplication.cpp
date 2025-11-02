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
        int a, b; cin >> a >> b;
        int ans = 0;
        if(a != b){
            if(a % b == 0 or b % a == 0) ans = 1;
            else ans = 2;
        }
        cout << ans << endl;
    }
    
    return 0;
}