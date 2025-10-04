#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
void setIO(string s){
    if (!s.empty()){
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }
}
//-------------------------------------------

int32_t main()
{   
    opt(); setIO("");
    
    tc{
        int l, r; cin >> l >> r;
        int divr = 0;
        if(r % 3 == 0) divr = (r / 3) * 2;
        else if(r % 3 == 2) divr = r / 3, divr *= 2, divr++;
        else if(r % 3 == 1) divr = r / 3, divr *= 2;

        l--;
        int divl = 0;
        if(l % 3 == 0) divl = (l / 3) * 2;
        else if(l % 3 == 2) divl = l / 3, divl *= 2, divl++;
        else if(l % 3 == 1) divl = l / 3, divl *= 2;
        
        cout << "Case " << _ << ": " << divr - divl << endl;
    }
    
    return 0;
}