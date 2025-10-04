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
        
        int l = -1, r = -1;
        for(int i = 0; i < n - 1; i++){
            if(s[i + 1] < s[i]){
                l = i, r = i;
                while(r + 1 < n and s[i] >= s[r + 1]){
                    r++;
                }
                break;
            }
        }
        if(l == -1){
            cout << s << endl; continue;
        }
        for(int i = 0; i < n; i++){
            if(i == l) continue;
            cout << s[i];
            if(i == r) cout << s[l];
        }
        cout << endl;
    }
    
    return 0;
}