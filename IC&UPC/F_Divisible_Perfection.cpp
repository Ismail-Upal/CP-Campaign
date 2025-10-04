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
        
        int ok = 1;
        if(n >= 10){
            for(int i = 9; i < n; i++){
                if(s[i] != '0') ok = 0;
            }
            if(!ok){
                cout << "NO" << endl; continue;
            }
        }
        if(n >= 5){
            for(int i = 4; i < n; i++){
                if(s[i] == '5') ok = 0;
            }
            if(!ok){
                cout << "NO" << endl; continue;
            }
        }
        for(int i = 1; i < n; i++){
            if((s[i] - '0') % 2) ok = 0;
            if(i >= 2){
                int sum = (s[i] - '0') + (s[i - 1] - '0') + (s[i - 2] - '0');
                if(sum % 3) ok = 0;
            } 
            int x = ((s[i - 1] - '0') * 10) + (s[i] - '0');
            if(x % 4) ok = 0; 
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}