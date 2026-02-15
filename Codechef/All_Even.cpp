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
        int sum = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x; 
            sum += x;
        }
        if(sum % 2) cout << "No";
        else cout << "Yes";
        cout << endl;
    }
    
    return 0;
}