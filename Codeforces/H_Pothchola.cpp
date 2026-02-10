#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define tc int t; cin >> t; for (int _ = 1; _ <= t; _++)
using ll = long long;
#define endl '\n'
#define sz(x) (ll)(x).size()
//-------------------------------------------

void print(int n){
    for(int i = 3; i >= 0; i--){
        if(n & (1 << i)) cout << 1 << " ";
        else cout << 0 << " " ;
    }
    cout << "- " << n << endl;
}

int main()
{   
    opt();
    
    tc{
        int n; cin >> n;
        // vector<int> v(n);
        // for(int i = 0; i < n; i++) cin >> v[i];

        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= n; j++){
                int x = i ^ j;
                if(i < x and x < j){
                    print(i);
                    print(x);
                    print(j);
                    cout << endl;
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}