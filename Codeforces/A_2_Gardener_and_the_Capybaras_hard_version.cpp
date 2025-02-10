#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
//-------------------------------------------

int32_t main()
{   
    opt();
    
    tc{
        string s; cin >> s;
        int n = sz(s);
        if(s[0] == s[n - 1]){
            for(int i = 0; i < n; i++){
                if(i == 1 or i == n - 1) cout << " ";
                cout << s[i];
            }
            cout << endl;
        }   
        else{
            int a = -1, b = -1;
            for(int i = 1; i < n - 1; i++){
                if(s[i] == 'a') a = i;
                else b = i;
                if(a > 0 and b > 0) break;
            }
            if(a > 0 and s[0] == 'a')
        }
    }
    
    return 0;
}