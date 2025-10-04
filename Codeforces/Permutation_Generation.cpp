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
    
    int n; cin >> n;
    int a = 2, b = 1;

    if(n % 2){
        cout << "impossible'" << endl;
        return 0;
    }
    for(int i = 1; i <= n; i++){
        if(i % 2){
            cout << a << " " ;
            a += 2;
        }
        else{
            cout << b << " ";
            b += 2;
        }
    }
    
    return 0;
}