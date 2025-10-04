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
        int odd = 0, evn = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x & 1) odd++;
            else evn++;
        }
        if(odd == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    return 0;
}