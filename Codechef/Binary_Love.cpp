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

        int ol = 0, lo = 0;
        for(int i = 0; i < n - 1; i++){
            if(s[i] == '1' and s[i + 1] == '0') lo++;
            if(s[i] == '0' and s[i + 1] == '1') ol++;
        }

        if(ol > 0 and lo > 0){
            if(lo == ol or (lo - 1 == ol) or (ol - 1) == lo) cout << "Alice" << endl; 
            else cout << "Bob" << endl;
        }
        else cout << "Bob" << endl;
    }
    
    return 0;
}