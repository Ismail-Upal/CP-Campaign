#include<bits/stdc++.h>
using namespace std;
#define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using ll = long long;
#define endl "\n"
#define sz(x) (ll)(x).size()
#define tc int t;cin>>t;while(t--)
//-------------------------------------------

void print(int i){
    if(i == 0) return;
    print(i - 1);
    cout << char('A' + i - 1) ;
    print(i - 1);
}
int32_t main()
{   
    opt();
    int n; 
    cin >> n;
    print(n); 
    return 0;
} 