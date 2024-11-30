#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        while(n%2==0){
            n=n/2;
        }
        if(n>1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}