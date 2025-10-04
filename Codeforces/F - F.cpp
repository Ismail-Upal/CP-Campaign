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
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        string s; cin >> s;
        int S = 0, N = 0;
        for(auto i : s){
            if(i == 'S') S++;
            else N++;
        }
        int ans = 0;
        if(is_sorted(v.begin(), v.end())){
            cout << 0 << endl; continue;
        }

        if(s[0] != s[n - 1] ){
            ans = 1;
        }
        else if(!N or !S){
            ans = -1;
        }
        else{
            int ok = 0;
            int i = 1;
            int x = 2;
            while(v[0] == 1 and i < n - 1){
                if(v[i] == x){
                    if(s[i] != s[n - 1]){
                        ok = 1; break;
                    }
                    else i++;
                    x++;
                }
                else break;
            }
            i = n - 2, x = n - 1;
            while(v[n - 1] == n and i > 0){
                if(v[i] == x){
                    if(s[0] != s[i]){
                        ok = 1;
                        break;
                    }
                    else i--;
                    x--;
                }
                else break;
            } 

            if(ok) ans = 1;
            else ans = 2;
        }

        cout << ans << endl;
    }
    
    return 0;
}