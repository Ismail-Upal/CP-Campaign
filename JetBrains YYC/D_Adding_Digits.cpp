#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

int32_t main()
{   
    opt();
    
    // ll a, b, n; cin >> a >> b >> n;
    // int tot = log10(a) + 1 + n;
    // for(int i = 0; i <= 9; i++){
    //     if((a * 10 + i) % b == 0){
    //         string s = to_string(a * 10 + i);
    //         while(s.size() < tot){
    //             s += '0';
    //         }
    //         cout << s << endl;
    //         return 0;
    //     }
    // }
    // cout << -1 ;

    char s[100001];
    fgets(s, 100001, stdin);
    for(int i = 0; s[i] != '\\'; i++) printf("%c", s[i]);
     
    return 0;
}