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
        set<int> se;
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            if(x != -1) se.insert(x);
        }
        if((se.size() == 1 and *se.begin() != 0) or se.empty()) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}