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
        char a[n + 5][n + 4]; memset(a, 0, sizeof a);
    
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++) cin >> a[i][j];
        }
        int ok = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(a[i][j] == '1'){
                    if(a[i + 1][j] == '1' and a[i][j + 1] == '1'){
                        ok = 1;
                        break;
                    }
                    else{
                        ok = 2;
                        break;
                    }
                }
            }
            if(ok > 0) break;
        }

        if(ok == 1) cout << "SQUARE" << endl;
        else if(ok == 2) cout << "TRIANGLE" << endl;
    }
    
    return 0;
}