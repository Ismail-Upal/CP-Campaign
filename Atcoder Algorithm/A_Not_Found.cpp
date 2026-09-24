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
    
    string s; cin >> s;
    char a[26] = {0};
    for(auto i : s){
        a[i - 'a'] = 1;
    }
    for(int i = 0; i <26; i++){
        if(!a[i]){
            cout << char(i + 'a') ; break;
        }
    }
    return 0;
}