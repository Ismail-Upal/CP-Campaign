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
        int n, k; cin >> n >> k;
        int bad = (n * n) - k;
        if(bad == 1){
            cout << "NO" << endl; continue;
        }
        char ch[n + 1][n + 1];
        memset(ch, 0, sizeof(ch));

        cout << "YES" << endl;

        while(bad){
            ch[1][1] = 'R'; bad--;
            for(int i = 2; i <= n and bad; i++){
                ch[1][i] = 'L'; bad--; 
            }
            for(int i = 2; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    if(bad){
                        ch[i][j] = 'U'; bad--;
                    }
                    else break;
                }
            }
        }


        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(!ch[i][j]) ch[i][j] = 'D';
                cout << ch[i][j];
            }
            cout << endl;
        }

    }
    
    return 0;
}