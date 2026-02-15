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
        int ok1 = 0, ok2 = 0;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x == 1) ok1 = 1;
            if(x == 67) ok2 = 1;
        }

        if(ok2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}