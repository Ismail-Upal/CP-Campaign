#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc ll t; cin >> t; for (ll _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        ll i = 1, j = 1, k = 1;
        while(i < sz(s)){
            j = (1 << k) - 1; k++;
            j = min(sz(s), j);
            // cout << i << " " << j << endl;
            sort(s.begin() + i - 1, s.begin() + j);
            i = j + 1;
        }
        cout << s << endl;
    }
    
    return 0;
}