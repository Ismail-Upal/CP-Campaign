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
        if(n % 4) cout << "NO" << endl;
        else{
            cout << "YES" << endl;

            for(int i = 1, j = 1; i <= n; i += 8){
                int evn = j + 1;
                j = (16 * i) + 1;
                cout << evn << " " << evn + 2 << " ";
                if(n % 8 and i == n - 3) break;
                cout << evn + 4 << " " << evn + 6 << " ";
            }

            for(int i = 1, j = 1; i <= n; i += 8){
                int odd = j;
                j = (16 * i) + 1;
                cout << odd << " " << odd + 4 << " ";
                if(n % 8 and i == n - 3) break;
                cout << odd + 2 << " " << odd + 10 << " ";
            }
            
            cout << endl;
        }
    }
    
    return 0;
}