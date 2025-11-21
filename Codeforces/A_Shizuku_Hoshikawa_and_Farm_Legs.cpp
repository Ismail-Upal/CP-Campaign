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
        int ans = 0;
        set<pair<int, int>> se;
        for(int i = 0; i <= n; i += 2){
            int j = n - i;
            if(i % 2 == 0 and j % 4 == 0) se.insert({i, j});
        }
        cout << sz(se) << endl;
    }
    
    return 0;
}