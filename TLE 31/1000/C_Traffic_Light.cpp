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
        int n; char c; 
        cin >> n >> c;
        string s; cin >> s;
        s += s;
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] != c) continue;
            for(int j = i + 1; j < 2*n; j++){
                if(s[j] == 'g'){
                    ans = max(ans, j - i);
                    i = j;
                    break;
                }
            }
        }
        if(c == 'g') ans = 0;
        cout << ans << endl;
    }
    
    return 0;
}