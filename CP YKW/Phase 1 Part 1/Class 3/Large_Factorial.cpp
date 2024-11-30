#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define mod 1000000007
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        ll mul = 1;
        for(int i=1; i<=n; i++){
            mul = ((mul % mod )*(i % mod )) % mod;
        } 
        cout<<mul<<endl;
    }
    return 0;
}

