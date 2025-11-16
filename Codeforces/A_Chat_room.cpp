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
    
    string s; cin >> s;
    string t = "hello";
    int ok = 0;
    int i = 0, j = 0;
    while(i < sz(s)){
        if(s[i] == t[j]) j++;
        i++;
    }
    if(j == sz(t)) cout << "YES";
    else cout << "NO";
    
    return 0;
}