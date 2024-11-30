#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        int x, y, n; cin>>x>>y>>n;
        int p = (n-y)/x;
        int k= p*x + y ;
        cout<<k<<endl;
    }
    return 0;
}