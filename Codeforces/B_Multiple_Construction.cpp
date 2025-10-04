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
        vector<int> v(2 * n + 1);
        v[1] = n, v[n + 1] = n;
        int i = 2, j = n - 1;
        while(v[i] != n){
            v[i] = j;
            j--; i++;
        }
        i = n + 2, j = 1;
        while(i <= 2 * n){
            v[i] = j++; i++;
        }

        for(int i = 1; i <= 2 * n; i++) cout << v[i] << " " ;
        cout << endl;
    }
    
    return 0;
}