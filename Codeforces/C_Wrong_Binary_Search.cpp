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
        vector<int> v(n + 2, 0);
        int ok = 1, l = -1, r = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                if(r != -1) l = r;
                r = i;
                v[i + 1] = i + 1;
            }
            if((l == -1 and r == 1) or r - l == 2) ok = 0;
        }
        v[n + 1] = 1;
        if(r == n - 2) ok = 0;

        if(ok){
            cout << "YES" << endl;
            int x = 0;

            for(int i = 1; i <= n; i++){
                if(v[i] == 1) x = 0;
                else if(v[i] == 0){
                    x = i;
                    while(v[i] == 0 and v[i + 1] == 0){
                        v[i] = i + 1; i++;
                    }
                    v[i] = x;
                }
            }
            for(int i = 1; i <= n; i++) cout << v[i] << " " ;
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    
    return 0;
}