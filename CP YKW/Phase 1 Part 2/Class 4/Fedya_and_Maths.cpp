#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------
// int func(int n){
//     int sum = 0;
//     for(int i = 1; i <= 4; i++){
//         sum += pow(i, n);
//     }
//     return sum%5;
// }
int32_t main()
{   
    opt();
    // tc{
    //     ll n; cin >> n;
    //     cout << func(n) << endl;
    // }

    string s; cin >> s;
    int sz = sz(s);
    if(sz < 8){
        int num = stoi(s);
        if(num % 4 == 0) cout << 4 << endl;
        else cout << 0 << endl;
    }
    else{
        int num = 10 * (s[sz - 2] - '0') + (s[sz - 1] - '0');
        if(num % 4 == 0) cout << 4 << endl;
        else cout << 0 << endl;
    }
    return 0;
}