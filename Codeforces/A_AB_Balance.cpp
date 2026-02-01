#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();
 
    tc{
        string s ;cin >> s;
        if(s[0] != s[sz(s)-1]) s[sz(s)-1] = s[0];

        cout << s << endl;
    }
    
    return 0;
}