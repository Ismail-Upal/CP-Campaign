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
        int n, m; cin >> n >> m;
        string s; cin >> s;
        int a = 0, b = 0;
        for(auto i : s){
            if(i == '1') a++;
            else b++;
        }
        int l = n - m;
        int nd = abs(a - b);

        if(l < nd){
            cout << "No" << endl;
        }
        else{
            l -= nd;
            if(l % 2 == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    
    return 0;
}