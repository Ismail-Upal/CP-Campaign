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
    
    int a, b; cin >> a >> b;
    if(a == 0 and b == 0) cout << "Not a moose" << endl;
    else if(a == b) cout << "Even " << a + b ;
    else if(a > b) cout << "Odd " << a * 2 ;
    else cout << "Odd " << b * 2 ; 
    
    return 0;
}