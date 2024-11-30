#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int32_t main()
{
    optimize();
    
    int n; cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) a[i] = i;
    do{
        for(int i=1; i<=n; i++) cout<<a[i];
        cout<<endl;
    }
    while(next_permutation(a+1, a+1+n));
    return 0;
}