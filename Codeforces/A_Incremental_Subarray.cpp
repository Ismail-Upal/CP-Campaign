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
        int n, k; cin >> n >> k;
        int ok = 1, prev = -1;
        for(int i = 0; i < k; i++){
            int x; cin >> x;
            if(prev == -1) prev = x;
            else if(x != prev + 1) ok = 0;
            else prev = x;
        }

        if(ok) cout << n - prev + 1 << endl;
        else cout << 1 << endl;
    }
    
    return 0;
}