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
        string s; cin >> s;
        int y = 0, n = 0;
        for(auto i : s){
            if(i == 'Y') y++;
            else n++;
        }
        if(y > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;
}