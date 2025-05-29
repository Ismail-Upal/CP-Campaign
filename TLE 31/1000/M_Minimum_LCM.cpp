#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
 
int32_t main()
{   
    opt();

    tc{
        int n; cin >> n;
        int a = 1;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                a = n / i;
                break;
            }
        }
        cout << a << " " << n - a << endl;
    }
    
    return 0;
}