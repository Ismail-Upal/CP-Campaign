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
    
    tc{
        int n; cin >> n;
        string s; cin >> s;
        int boy = 0, girl = 0;
        for(int i = 0; i < n; i++){
            if(boy > 2 * girl) break;
            if(s[i] == 'B') boy++;
            else girl++;
        }
        cout << girl + boy << endl;
    }
    
    return 0;
}