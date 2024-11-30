
#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main()
{
    optimize();
    int n; cin>>n;
    ll ans=0;
    while(n--){
        int a; cin>>a;
        ans^=a;
    }
    cout<<ans;
    return 0;
}