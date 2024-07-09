#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n; cin>>n;
    if(n<=9)cout<<"000"<<n;
    else if(n<=99)cout<<"00"<<n;
    else if(n<=999)cout<<"0"<<n;
    else cout<<n;
    return 0;
}