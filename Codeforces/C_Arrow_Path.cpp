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
        int a[2][n];
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                char c; cin >> c;
                int d = j + 1;
                if(i == 1) d++;
                if(c == '<' and d % 2 == 0) a[i][j] = 1;
                else a[i][j] = 0;
                // cout << a[i][j];
            }
            // cout << endl;
        }
        int ok = 1;
        for(int j = 0; j < n; j++){
            int x = a[0][j];
            int y;
            if(j - 1 >= 0){
                y = a[1][j - 1];
                if(x + y == 2) ok = 0;
            }
            if(j + 1 < n - 1){
                y = a[1][j + 1];
                if(x + y == 2) ok = 0;
            }
        }
        for(int j = 0; j < n - 1; j++){
            int x = a[1][j];
            int y;
            if(j - 1 >= 0){
                y = a[0][j - 1];
                if(x + y == 2) ok = 0;
            }
            if(j + 1 < n){
                y = a[0][j + 1];
                if(x + y == 2) ok = 0;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}