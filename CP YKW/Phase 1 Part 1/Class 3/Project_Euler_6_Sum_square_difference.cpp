#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e7+21;
int a[N];
int main()
{
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll sq_sum= (n*(n+1)*(2*n+1))/6;
        ll sum = n*(n+1)/2;
        sum*=sum;
        cout<<sum-sq_sum<<endl; 
    }
    return 0;
}

