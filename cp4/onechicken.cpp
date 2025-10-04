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
    if(a < b and b - a > 1) cout << "Dr. Chaz will have " << b - a << " pieces of chicken left over!"; 
    else if(a < b and b - a == 1) cout << "Dr. Chaz will have " << b - a << " piece of chicken left over!"; 
    else if(a > b and a - b > 1) cout << "Dr. Chaz needs " << a - b << " more pieces of chicken!";
    else if(a > b and a - b == 1) cout << "Dr. Chaz needs " << a - b << " more piece of chicken!";
    return 0;
}