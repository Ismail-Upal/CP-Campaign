#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------
void hanoi(int n, int a, int c, int b){
    if(n == 0) return;
    hanoi(n-1, a, b, c);
    cout << a << " " << c << endl;
    hanoi(n-1, b, c, a);
}
int32_t main()
{   
    opt();
 
    int n; cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n, 1, 3, 2);
    
    return 0;
}