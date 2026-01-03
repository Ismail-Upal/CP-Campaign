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
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, six = 0, fiv = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '5' and i >= 3){
                if(s[i - 3] == '2' and s[i - 2] == '0' and s[i - 1] == '2'){
                    fiv = 1;
                }
                
            }
            if(s[i] == '6' and i >= 3){
                if(s[i - 3] == '2' and s[i - 2] == '0' and s[i - 1] == '2'){
                    six = 1;
                }
                
            }
        }

        if(six) cout << 0 << endl;
        else cout << fiv << endl;
    }
    
    return 0;
}