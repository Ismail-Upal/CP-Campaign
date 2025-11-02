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
    
   
        ll k, p; cin >> k >> p;
        ll n = 1;
        while(n <= k){
            n *= 10;
        }

        ll j = 1;
        n /= 10;
        while(n <= k){
            if(n * j > k){
                n *= (j - 1);
                break;
            }
            j++;
        }  
        j--;
        

        cout << n << endl;

    return 0;
}