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
    
    tc{
        int n, k; cin >> n >> k ;
        string s; cin >> s;

        int ans = 0;
        
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                int j = i - 1, ok = 0;
                while(j >= 0 and i - j <= k - 1){
                    if(s[j] == '1') ok = 1;
                    j--;
                }
                if(!ok) ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}