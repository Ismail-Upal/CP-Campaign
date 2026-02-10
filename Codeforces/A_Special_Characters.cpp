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
        if(n & 1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            char c = 'A';
            for(int i = 1; i <= n; i += 2){
                cout << c << c ;
                if(c == 'Z') c = 'A';
                else c++;
            }
            cout << endl;
        }
    }
    
    return 0;
}