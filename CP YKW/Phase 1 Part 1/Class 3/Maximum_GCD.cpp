#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N= 1e14;
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n&1)n--;
        cout<<__gcd(n,n/2)<<endl;
    }
    return 0;
}