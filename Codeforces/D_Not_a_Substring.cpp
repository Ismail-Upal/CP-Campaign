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
        string s; cin >> s;
        int n = sz(s);

        if(n == 2 and s == "()") cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            int ok = 0;
            for(int i = 0; i < n - 1; i++){
                if(s[i] == '(' and s[i + 1] == '(') ok = 1;
                if(s[i] == ')' and s[i + 1] == ')') ok = 1;
            }
            if(ok){
                for(int i = 1; i <= n; i++) cout << "()";
            }
            else{
                for(int i = 1; i <= n; i++) cout << "(";
                for(int i = 1; i <= n; i++) cout << ")";
            }
            cout << endl;
        }
    }
    
    return 0;
}