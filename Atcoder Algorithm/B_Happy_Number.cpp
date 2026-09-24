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
    
    int n; cin >> n;
    int ok = 0;
    for(int i = 1; i <= 100000; i++){
        string s = to_string(n);
        int m = 0;
        for(auto c : s){
            m += (c - '0') * (c - '0');
        }
        n = m;
        if(n == 1){
            ok = 1;
            break;
        }
    }
    if(ok) cout << "Yes";
    else cout << "No";
    
    return 0;
}