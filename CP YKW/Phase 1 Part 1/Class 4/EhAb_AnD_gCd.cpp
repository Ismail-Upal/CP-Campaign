
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
        int n; cin>>n ;
        // cout<<__gcd(n-1, 1) + (n-1)/__gcd(n-1,1);
        cout<<n-1<<' '<<1<<endl;
    }
    return 0;
}